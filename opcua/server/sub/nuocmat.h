#ifndef __NUOCMAT_H__
#define __NUOCMAT_H__

#include <signal.h>
#include <stdio.h>
#include "../../open62541/open62541.h"


typedef struct {
    UA_Float Temperature;
    UA_Float pH;
    UA_Float TSS;
    UA_Float COD;
	UA_Float DO;
	UA_Float NO3;
    UA_Float PO4;
    UA_Float NH4;
    UA_Float TotalP;
    UA_Float TotalN;
    UA_Float TOC;
} chiso_nuocmat;

chiso_nuocmat f_nuocmat;

UA_NodeId ni_nuocmat[11];

void nuocmat_init();

void
nuocmat_readTemperature(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
nuocmat_readpH(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
nuocmat_readTSS(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
nuocmat_readCOD(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
nuocmat_readDO(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
nuocmat_readNO3(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
nuocmat_readPO4(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
nuocmat_readNH4(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);   

void
nuocmat_readTotalP(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
nuocmat_readTotalN(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
nuocmat_readTOC(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);   


void (*fp_nuocmat_read[11]) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
nuocmat_addCallback(UA_Server* server, UA_NodeId nodeid, void (*fp_beforeRead) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data));

void add_nuocmat(UA_Server *server);

#endif 
