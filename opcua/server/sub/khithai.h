#ifndef __KHITHAI_H__
#define __KHITHAI_H__

#include <signal.h>
#include <stdio.h>
#include "../../open62541/open62541.h"


typedef struct {
    UA_Float Temperature;
    UA_Float Pressure;
    UA_Float NO;
    UA_Float NO2;
    UA_Float CO;
    UA_Float SO2;
    UA_Float O2;
    UA_Float H2S;
    UA_Float NH3;
    UA_Float Hg;
    UA_Float PM;
} chiso_khithai;

chiso_khithai f_khithai_kcnlongthanh_tram1;

UA_NodeId ni_khithai_kcnlongthanh_tram1[11];

void khithai_kcnlongthanh_tram1_nodeIdArrayInit();

void
khithai_kcnlongthanh_tram1_beforeReadTemperature(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khithai_kcnlongthanh_tram1_beforeReadPressure(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khithai_kcnlongthanh_tram1_beforeReadNO(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khithai_kcnlongthanh_tram1_beforeReadNO2(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khithai_kcnlongthanh_tram1_beforeReadCO(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khithai_kcnlongthanh_tram1_beforeReadSO2(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khithai_kcnlongthanh_tram1_beforeReadO2(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khithai_kcnlongthanh_tram1_beforeReadH2S(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);   

void
khithai_kcnlongthanh_tram1_beforeReadNH3(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khithai_kcnlongthanh_tram1_beforeReadHg(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khithai_kcnlongthanh_tram1_beforeReadPM(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);   

void (*fp_khithai_kcnlongthanh_tram1_beforeRead[11]) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data);

void
khithai_kcnlongthanh_tram1_addCallback(UA_Server* server, UA_NodeId nodeid, void (*fp_beforeRead) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data));

void add_khithai_kcnlongthanh_tram1(UA_Server *server);

#endif //__KHITHAI_H__
