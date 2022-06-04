/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

#include <signal.h>
#include <stdio.h>
#include "../../open62541/open62541.h"
#include "khongkhi.h"


chiso_khongkhi f_khongkhi;
UA_NodeId ni_khongkhi[7];

void khongkhi_init() {
    for(int i=0;i<7;i++) {
        ni_khongkhi[i] = UA_NODEID_NUMERIC(2, 11101 + i);
    }

    f_khongkhi.Temperature = 20.0;    
    f_khongkhi.NO2    = 1000.0; 
    f_khongkhi.CO 	= 35.0;
    f_khongkhi.SO2 	     = 40.0; 
    f_khongkhi.O3 	     = 640.0;   
    f_khongkhi.PM10 	     = 180.0;   
    f_khongkhi.PM25 	     = 75.0;   
};

void
khongkhi_readTemperature(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khongkhi.Temperature += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khongkhi.Temperature, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khongkhi[0], value);
};

void
khongkhi_readNO2(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khongkhi.NO2 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khongkhi.NO2, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khongkhi[1], value);
};

void
khongkhi_readCO(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khongkhi.CO += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khongkhi.CO, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khongkhi[2], value);
};

void
khongkhi_readSO2(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khongkhi.SO2 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khongkhi.SO2, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khongkhi[3], value);
};

void
khongkhi_readO3(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khongkhi.O3 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khongkhi.O3, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khongkhi[4], value);
};

void
khongkhi_readPM10(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khongkhi.PM10 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khongkhi.PM10, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khongkhi[5], value);
};

void
khongkhi_readPM25(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khongkhi.PM25 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khongkhi.PM25, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khongkhi[6], value);
};


void (*fp_khongkhi_read[7]) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) = {khongkhi_readTemperature,
                                                                khongkhi_readNO2,
                                                                khongkhi_readCO,
                                                                khongkhi_readSO2,
                                                                khongkhi_readO3,
                                                                khongkhi_readPM10,
                                                                khongkhi_readPM25};


void
khongkhi_addCallback(UA_Server* server, UA_NodeId nodeid, void (*fp_beforeRead) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data)) {
    UA_ValueCallback callback;
    callback.onRead = fp_beforeRead;
    callback.onWrite = NULL;
    UA_Server_setVariableNode_valueCallback(server, nodeid, callback);
}

void add_khongkhi(UA_Server *server) {
    khongkhi_init();

    for(int i=0; i<7; i++) {
        khongkhi_addCallback(server, ni_khongkhi[i], fp_khongkhi_read[i]);
    }

};
