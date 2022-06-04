/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

#include <signal.h>
#include <stdio.h>
#include "../../open62541/open62541.h"
#include "nuocmat.h"


chiso_nuocmat f_nuocmat;
UA_NodeId ni_nuocmat[11];

void nuocmat_init() {
    for(int i=0;i<11;i++) {
        ni_nuocmat[i] = UA_NODEID_NUMERIC(2, 11101 + i);
    }

    f_nuocmat.Temperature = 20.0;    
    f_nuocmat.pH    = 7.0; 
    f_nuocmat.TSS 	= 35.0;
    f_nuocmat.COD 	     = 40.0; 
    f_nuocmat.DO 	     = 640.0;   
    f_nuocmat.NO3 	     = 180.0;   
    f_nuocmat.PO4 	     = 75.0;   
    f_nuocmat.NH4 	     = 90.0;    
    f_nuocmat.TotalP 	     = 15.0;
    f_nuocmat.TotalN 	     = 25.0;    
    f_nuocmat.TOC 	     = 150.0;
};

void
nuocmat_readTemperature(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.Temperature += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.Temperature, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[0], value);
};

void
nuocmat_readpH(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.pH += temp*0.1;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.pH, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[1], value);
};

void
nuocmat_readTSS(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.TSS += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.TSS, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[2], value);
};

void
nuocmat_readCOD(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.COD += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.COD, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[3], value);
};

void
nuocmat_readDO(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.DO += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.DO, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[4], value);
};

void
nuocmat_readNO3(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.NO3 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.NO3, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[5], value);
};

void
nuocmat_readPO4(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.PO4 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.PO4, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[6], value);
};

void
nuocmat_readNH4(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.NH4 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.NH4, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[7], value);
};

void
nuocmat_readTotalP(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.TotalP += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.TotalP, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[8], value);
};

void
nuocmat_readTotalN(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.TotalN += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.TotalN, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[9], value);
};

void
nuocmat_readTOC(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_nuocmat.TOC += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_nuocmat.TOC, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_nuocmat[10], value);
};


void (*fp_nuocmat_read[11]) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) = {nuocmat_readTemperature,
                                                                nuocmat_readpH,
                                                                nuocmat_readTSS,
                                                                nuocmat_readCOD,
                                                                nuocmat_readDO,
                                                                nuocmat_readNO3,
                                                                nuocmat_readPO4,
                                                                nuocmat_readNH4,
                                                                nuocmat_readTotalP,
                                                                nuocmat_readTotalN,
                                                                nuocmat_readTOC};


void
nuocmat_addCallback(UA_Server* server, UA_NodeId nodeid, void (*fp_beforeRead) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data)) {
    UA_ValueCallback callback;
    callback.onRead = fp_beforeRead;
    callback.onWrite = NULL;
    UA_Server_setVariableNode_valueCallback(server, nodeid, callback);
}

void add_nuocmat(UA_Server *server) {
    nuocmat_init();

    for(int i=0; i<11; i++) {
        nuocmat_addCallback(server, ni_nuocmat[i], fp_nuocmat_read[i]);
    }

};
