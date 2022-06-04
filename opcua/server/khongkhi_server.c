/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

#include <signal.h>
#include <stdio.h>
#include "../open62541/open62541.h"
#include "../model/khongkhi.h"
#include "sub/khongkhi.h"


UA_Boolean running = true;
UA_UInt16 duty = 50;
UA_Boolean run = false;

static void stopHandler(int sign)
{
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

static UA_StatusCode
writeRun(UA_Server *server ,
                const UA_NodeId *sessionId, void *sessionContext,
                const UA_NodeId *nodeid, void *nodeContext,
                const UA_NumericRange *range, const UA_DataValue *data) {


        run = * (UA_Boolean*) data->value.data;
        printf("Run = %d\n", run);
        return UA_STATUSCODE_GOOD;
}

static UA_StatusCode
readRun(UA_Server *server ,
                const UA_NodeId *sessionId, void *sessionContext,
                const UA_NodeId *nodeid, void *nodeContext,
                UA_Boolean sourceTimeStamp, const UA_NumericRange *range,
                UA_DataValue *dataValue) {

        UA_Variant_setScalarCopy(&dataValue->value, &run, &UA_TYPES[UA_TYPES_BOOLEAN]);
        dataValue->hasValue = true;
        return UA_STATUSCODE_GOOD;
}

static void
addRunDataSource(UA_Server *server) {
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        attr.displayName = UA_LOCALIZEDTEXT("en-US", "Run");
        attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

        UA_DataSource runDataSource;
        runDataSource.read = readRun;
        runDataSource.write = writeRun;
        UA_Server_addDataSourceVariableNode(server, UA_NODEID_NUMERIC(2, 11116),
                                        UA_NODEID_NUMERIC(2, 11100),
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                                        UA_QUALIFIEDNAME(2, "Run"),
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                        attr, runDataSource,
                                        NULL, NULL);
}

static UA_StatusCode
writeDuty(UA_Server *server ,
                const UA_NodeId *sessionId, void *sessionContext,
                const UA_NodeId *nodeid, void *nodeContext,
                const UA_NumericRange *range, const UA_DataValue *data) {


        duty = * (UA_UInt16*) data->value.data;
        printf("Duty = %d\n", duty);
        return UA_STATUSCODE_GOOD;
}

static UA_StatusCode
readDuty(UA_Server *server ,
                const UA_NodeId *sessionId, void *sessionContext,
                const UA_NodeId *nodeid, void *nodeContext,
                UA_Boolean sourceTimeStamp, const UA_NumericRange *range,
                UA_DataValue *dataValue) {

        UA_Variant_setScalarCopy(&dataValue->value, &duty, &UA_TYPES[UA_TYPES_UINT16]);
        dataValue->hasValue = true;
        return UA_STATUSCODE_GOOD;
}

static void
addDutyDataSource(UA_Server *server) {
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        attr.displayName = UA_LOCALIZEDTEXT("en-US", "Duty");
        attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

        UA_DataSource runDataSource;
        runDataSource.read = readDuty;
        runDataSource.write = writeDuty;
        UA_Server_addDataSourceVariableNode(server, UA_NODEID_NUMERIC(2, 11115),
                                        UA_NODEID_NUMERIC(2, 11100),
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                                        UA_QUALIFIEDNAME(2, "Duty"),
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                        attr, runDataSource,
                                        NULL, NULL);
}

static UA_DataValue *externalValue;
static void
addExternalRunDataSource(UA_Server *server) {

        UA_ValueBackend valueBackend;
        valueBackend.backendType = UA_VALUEBACKENDTYPE_EXTERNAL;
        valueBackend.backend.external.value = &externalValue;

        UA_Server_setVariableNode_valueBackend(server, UA_NODEID_NUMERIC(1, 3000), valueBackend);
}


/* ------------------------------------------------------------*/

int main(int argc, char * argv[])
{
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);


// Khoi chay mot Server OPC UA empty
    UA_Server *server = UA_Server_new();

// Cai dat de co the nhap IP address va portnumber
    if(argc > 2){
	UA_Int16 port_number = atoi(argv[2]);
	UA_ServerConfig_setMinimal(UA_Server_getConfig(server), port_number, 0);
    }
    else
	UA_ServerConfig_setDefault(UA_Server_getConfig(server));
    if(argc > 1) {
	UA_String hostname;
	UA_String_init(&hostname);
	hostname.length = strlen(argv[1]);
	hostname.data = (UA_Byte *) argv[1];
	UA_ServerConfig_setCustomHostname(UA_Server_getConfig(server), hostname);
    }


// Tien hanh add Information Model vao Server
    UA_StatusCode retval = khongkhi(server);
    /* create nodes from nodeset */
    if (retval != UA_STATUSCODE_GOOD)
    {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add imformation model to server!!!");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    }


//Get Namespace Index
    size_t ns0;
    UA_UInt16 isFound0 = UA_Server_getNamespaceByName(server, UA_STRING("http://opcfoundation.org/UA/"), &ns0);
    if (isFound0 == UA_STATUSCODE_GOOD) UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Namespace0 have index:  %ld", ns0);
    else UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Not found Namespace0 in Information Model!!!");

    size_t ns1;
    UA_UInt16 isFound1 = UA_Server_getNamespaceByName(server, UA_STRING("https://thesis.org/outstations/"), &ns1);
     if (isFound1 == UA_STATUSCODE_GOOD) UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Namespace1 have index:  %ld", ns1);
    else UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Not found Namespace1 in Information Model!!!");   

// Add Khi Thai - KCN Long Thanh - Tram 1
    add_khongkhi(server);

    addRunDataSource(server);
    addDutyDataSource(server);
    addExternalRunDataSource(server);

// Run Server
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Server is starting....");
    retval = UA_Server_run(server, &running);
    /* Den day, CT vao vong lap vo han cho den khi user nhan Ctrl+C */
    /* Truoc do, CT chay tuan tu tu tren xuong duoi */

// Delete Server OPC UA
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Server is shutting down....");
    UA_Server_delete(server);

    return (int) retval;
}

