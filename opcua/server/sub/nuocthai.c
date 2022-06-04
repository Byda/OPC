#include <signal.h>
#include <stdio.h>
#include "../../open62541/open62541.h"
#include "nuocthai.h"


chiso_nuocthai f_nuocthai;
UA_NodeId ni_nuocthai[12];

void nuocthai_init() {
    for(int i=0;i<12;i++) {
        ni_nuocthai[i] = UA_NODEID_NUMERIC(2, 11101 + i);
    }

    f_nuocthai.FlowIn = 1000.0;
    f_nuocthai.FlowOut    = 1000.0;
    f_nuocthai.Temperature 	= 30.0;
    f_nuocthai.Color 	     = 10.0;
    f_nuocthai.pH 	     = 7.0;
    f_nuocthai.TSS 	     = 180.0;
    f_nuocthai.COD 	     = 75.0;
    f_nuocthai.NH4 	     = 90.0;
    f_nuocthai.Photpho 	     = 15.0;
    f_nuocthai.Nito 	     = 25.0;
    f_nuocthai.TOC 	     = 150.0;
    f_nuocthai.Clo 	     = 290.0;
};

void
nuocthai_readFlowIn(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.FlowIn += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.FlowIn, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[0], value);
};

void
nuocthai_readFlowOut(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.FlowOut += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.FlowOut, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[1], value);
};

void
nuocthai_readTemperature(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.Temperature += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.Temperature, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[2], value);
};

void
nuocthai_readColor(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.Color += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.Color, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[3], value);
};

void
nuocthai_readpH(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.pH += temp * 0.1;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.pH, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[4], value);
};

void
nuocthai_readTSS(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.TSS += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.TSS, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[5], value);
};

void
nuocthai_readCOD(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.COD += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.COD, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[6], value);
};

void
nuocthai_readNH4(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.NH4 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.NH4, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[7], value);
};

void
nuocthai_readPhotpho(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.Photpho += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.Photpho, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[8], value);
};

void
nuocthai_readNito(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.Nito += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.Nito, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[9], value);
};

void
nuocthai_readTOC(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.TOC += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.TOC, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[10], value);
};

void
nuocthai_readClo(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocthai.Clo += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocthai.Clo, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocthai[11], value);
};


void (*fp_nuocthai_read[12]) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) = {nuocthai_readFlowIn,
                                                                nuocthai_readFlowOut,
                                                                nuocthai_readTemperature,
                                                                nuocthai_readColor,
                                                                nuocthai_readpH,
                                                                nuocthai_readTSS,
                                                                nuocthai_readCOD,
                                                                nuocthai_readNH4,
                                                                nuocthai_readPhotpho,
                                                                nuocthai_readNito,
                                                                nuocthai_readTOC,
                                                                nuocthai_readClo};


void
nuocthai_addCallback(UA_Server* server, UA_NodeId nodeid, void (*fp_beforeRead) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data)) {
    UA_ValueCallback callback;
    callback.onRead = fp_beforeRead;
    callback.onWrite = NULL;
    UA_Server_setVariableNode_valueCallback(server, nodeid, callback);
}

void add_nuocthai(UA_Server *server) {
    nuocthai_init();

    for(int i=0; i<12; i++) {
        nuocthai_addCallback(server, ni_nuocthai[i], fp_nuocthai_read[i]);
    }

};
