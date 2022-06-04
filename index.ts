const { OPCUAClient, makeBrowsePath, AttributeIds, resolveNodeId, TimestampsToReturn} = require("node-opcua");
const async = require("async");

//const endpointUrl = "opc.tcp://opcuademo.sterfive.com:26543";
const endpointUrl = "opc.tcp://20.205.122.62:3000/";

const connectionStrategy = {
  initialDelay: 1000,
  maxRetry: 1
};
const client = OPCUAClient.create({
  applicationName: "NodeOPCUA-Client",
  connectionStrategy: connectionStrategy,
  endpointMustExist: false
});

client.on("backoff", (retry, delay) =>
      console.log(
        "still trying to connect to ",
        endpointUrl,
        ": retry =",
        retry,
        "next attempt in ",
        delay / 1000,
        "seconds"
      )
);

let the_session, the_subscription;

const express = require('express')
const app = express()
const PORT = 3000

const http = require('http')
const server = http.createServer(app)
const {Server} = require('socket.io')
const delay = require('delay')

const io = new Server(server)

app.get('/', (req, res) => {
})

io.on('connection', (client) => {
	console.log('user connected!')
})

server.listen(PORT, () => {
	console.log('listen on port 3000!')
})

async function broadcastData() {
	async.series([
    
        // step 1 : connect to
        function(callback)  {
            client.connect(endpointUrl, function(err) {
              if (err) {
                console.log(" cannot connect to endpoint :", endpointUrl);
              } else {
                console.log("connected !");
              }
              callback(err);
            });
        },
    
        // step 2 : createSession
        function(callback) {
            client.createSession(function(err, session) {
              if (err) {
                return callback(err);
              }
              the_session = session;
              callback();
            });
        },

	// step 5: install a subscription and install a monitored item for 10 seconds
        function(callback) {
           const subscriptionOptions = {
             maxNotificationsPerPublish: 1000,
             publishingEnabled: true,
             requestedLifetimeCount: 100,
             requestedMaxKeepAliveCount: 10,
             requestedPublishingInterval: 500
           };
           the_session.createSubscription2(subscriptionOptions, (err, subscription) => {
             if (err) {
               return callback(err);
             }
           
             the_subscription = subscription;

	     process.on('SIGINT', function() {
		console.log("Ctrl+C interrupt signal");
		console.log("Client disconnecting...");

		the_subscription.terminate();
		the_session.close();
		client.disconnect();
		process.exit();
	     });
           
             the_subscription
               .on("started", () => {
                 console.log(
                   "subscription started for 2 seconds - subscriptionId=",
                   the_subscription.subscriptionId
                 );
               })
               .on("keepalive", function() {
                 console.log("subscription keepalive");
               })
               .on("terminated", function() {
                 console.log("terminated");
               });
             callback();
           });
        },
        function(callback) {
           // install monitored item
           const itemsToMonitor = [
	     {
               nodeId: resolveNodeId("ns=2;i=11101"),
               attributeId: AttributeIds.Value
             },
	     {
	       nodeId: resolveNodeId("ns=2;i=11102"),
               attributeId: AttributeIds.Value
	     }
	   ];
           const monitoringParamaters = {
             samplingInterval: 500,
             discardOldest: true,
             queueSize: 10
           };
           
           the_subscription.monitorItems(
             itemsToMonitor,
             monitoringParamaters,
             TimestampsToReturn.Both,
             (err, monitoredItems) => {
               monitoredItems.on("changed", function(monitorItem, dataValue, index) {
		 /*console.log(
                   "Monitored Item Temperature (degree) = ",
                   dataValue
                 );

		 console.log(
                   "INDEX ---------------------------> ",
                   index
                 );*/

		 io.emit('exchange-data', {
					index: index,
                                        value: parseFloat(dataValue.value.value.toFixed(2)),
					//serverTimestamp: dataValue.serverTimestamp.toISOString(),
					status: dataValue.statusCode._name
                                })
               });
               callback();
             }
           );
           console.log("-------------------------------------");
        },
        function(callback) {
            // wait a little bit : 10 seconds
            setTimeout(()=>callback(), 50*1000);
        },
        // terminate session
        function(callback) {
            the_subscription.terminate(callback);;
        },
        // close session
        function(callback) {
            the_session.close(function(err) {
              if (err) {
                console.log("closing session failed ?");
              }
              callback();
            });
        }
    
    ],
    function(err) {
        if (err) {
            console.log(" failure ",err);
        } else {
            console.log("done!");
        }
        client.disconnect(function(){});
    });
}	

broadcastData()
