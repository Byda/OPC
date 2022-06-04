/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

#include <signal.h>
#include <stdio.h>
#include "../../open62541/open62541.h"
#include "khithai.h"
#include <sys/time.h>

chiso_khithai f_khithai_kcnlongthanh_tram1;
UA_NodeId ni_khithai_kcnlongthanh_tram1[11];

void khithai_kcnlongthanh_tram1_Init() {
    for(int i=0;i<11;i++) {
        ni_khithai_kcnlongthanh_tram1[i] = UA_NODEID_NUMERIC(2, 11101 + i);
    }

    f_khithai_kcnlongthanh_tram1.Temperature = 80.0;    //f_Temperature
    f_khithai_kcnlongthanh_tram1.Pressure    = 1000.0;    //f_Pressure
    f_khithai_kcnlongthanh_tram1.NO 	     = 35.0,    //f_NO
    f_khithai_kcnlongthanh_tram1.NO2 	     = 40.0,    //f_NO2
    f_khithai_kcnlongthanh_tram1.CO 	     = 640.0,    //f_CO
    f_khithai_kcnlongthanh_tram1.SO2 	     = 180.0,    //f_SO2
    f_khithai_kcnlongthanh_tram1.O2 	     = 75.0,    //f_O2
    f_khithai_kcnlongthanh_tram1.H2S 	     = 90.0,    //f_H2S
    f_khithai_kcnlongthanh_tram1.NH3 	     = 15.0,    //f_NH3
    f_khithai_kcnlongthanh_tram1.Hg 	     = 20.0,    //f_Hg
    f_khithai_kcnlongthanh_tram1.PM 	     = 150.0;    //f_PM
};

void
khithai_kcnlongthanh_tram1_beforeReadTemperature(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.Temperature += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.Temperature, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[0], value);
};

void
khithai_kcnlongthanh_tram1_beforeReadPressure(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.Pressure += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.Pressure, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[1], value);
};

void
khithai_kcnlongthanh_tram1_beforeReadNO(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.NO += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.NO, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[2], value);
};

void
khithai_kcnlongthanh_tram1_beforeReadNO2(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.NO2 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.NO2, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[3], value);
};

void
khithai_kcnlongthanh_tram1_beforeReadCO(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.CO += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.CO, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[4], value);
};

void
khithai_kcnlongthanh_tram1_beforeReadSO2(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.SO2 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.SO2, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[5], value);
};

void
khithai_kcnlongthanh_tram1_beforeReadO2(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.O2 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.O2, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[6], value);
};

void
khithai_kcnlongthanh_tram1_beforeReadH2S(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.H2S += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.H2S, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[7], value);
};

void
khithai_kcnlongthanh_tram1_beforeReadNH3(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.NH3 += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.NH3, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[8], value);
};

void
khithai_kcnlongthanh_tram1_beforeReadHg(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.Hg += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.Hg, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[9], value);
};

void
khithai_kcnlongthanh_tram1_beforeReadPM(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {

    UA_Float temp = (UA_Float) 1.0 * (rand()%100)/100 - 0.5;
    f_khithai_kcnlongthanh_tram1.PM += temp;

    UA_Variant value;

	UA_Variant_setScalar(&value, &f_khithai_kcnlongthanh_tram1.PM, &UA_TYPES[UA_TYPES_FLOAT]);

	UA_Server_writeValue(server, ni_khithai_kcnlongthanh_tram1[10], value);
};

void (*fp_khithai_kcnlongthanh_tram1_beforeRead[11]) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) = {khithai_kcnlongthanh_tram1_beforeReadTemperature,
                                                                khithai_kcnlongthanh_tram1_beforeReadPressure,
                                                                khithai_kcnlongthanh_tram1_beforeReadNO,
                                                                khithai_kcnlongthanh_tram1_beforeReadNO2,
                                                                khithai_kcnlongthanh_tram1_beforeReadCO,
                                                                khithai_kcnlongthanh_tram1_beforeReadSO2,
                                                                khithai_kcnlongthanh_tram1_beforeReadO2,
                                                                khithai_kcnlongthanh_tram1_beforeReadH2S,
                                                                khithai_kcnlongthanh_tram1_beforeReadNH3,
                                                                khithai_kcnlongthanh_tram1_beforeReadHg,
                                                                khithai_kcnlongthanh_tram1_beforeReadPM};


void
khithai_kcnlongthanh_tram1_addCallback(UA_Server* server, UA_NodeId nodeid, void (*fp_beforeRead) (UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data)) {
    UA_ValueCallback callback;
    callback.onRead = fp_beforeRead;
    callback.onWrite = NULL;
    UA_Server_setVariableNode_valueCallback(server, nodeid, callback);
}

/*static void
afterWriteLED1(UA_Server *server,
		const UA_NodeId *sessionId, void *sessionContext,
		const UA_NodeId *nodeid, void *nodeContext,
		const UA_NumericRange *range, const UA_DataValue *data) {
	UA_Variant value;
	UA_Server_readValue(server,  UA_NODEID_NUMERIC(2, 11114), &value);
	printf("\n%f\n", *(UA_Float*)value.data);
};*/

void add_khithai_kcnlongthanh_tram1(UA_Server *server) {
    khithai_kcnlongthanh_tram1_Init();
/*
	UA_ValueCallback callback1;
	callback1.onRead = NULL;
	callback1.onWrite = afterWriteLED1;
	UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(2,11114), callback1);
*/
    for(int i=0; i<11; i++) {
        khithai_kcnlongthanh_tram1_addCallback(server, ni_khithai_kcnlongthanh_tram1[i], fp_khithai_kcnlongthanh_tram1_beforeRead[i]);
    }

};
