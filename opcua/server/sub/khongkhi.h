#ifndef __KHONGKHI_H__
#define __KHONGKHI_H__

#include <signal.h>
#include <stdio.h>
#include "../../open62541/open62541.h"


typedef struct {
    UA_Float Temperature;
    UA_Float NO2;
    UA_Float CO;
    UA_Float SO2;
    UA_Float O3;
    UA_Float PM10;
    UA_Float PM25;
} chiso_khongkhi;

chiso_khongkhi f_khongkhi;

UA_NodeId ni_khongkhi[7];

void khongkhi_init();

void
khongkhi_readTemperature(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khongkhi_readNO2(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khongkhi_readCO(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khongkhi_readSO2(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khongkhi_readO3(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khongkhi_readPM10(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khongkhi_readPM25(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void (*fp_khongkhi_read[7]) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khongkhi_addCallback(UA_Server* server, UA_NodeId nodeid, void (*fp_beforeRead) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data));

void add_khongkhi(UA_Server *server);

#endif 
