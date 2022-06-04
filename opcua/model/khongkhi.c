/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "khongkhi.h"


/* Khong Khi - ns=1;i=10000 */

static UA_StatusCode function_khongkhi_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Khong Khi");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 10000LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Khong Khi"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_khongkhi_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10000LU)
);
}

/* Quan Tan Binh - ns=1;i=11000 */

static UA_StatusCode function_khongkhi_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Quan Tan Binh");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 11000LU),
UA_NODEID_NUMERIC(ns[1], 10000LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Quan Tan Binh"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_khongkhi_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11000LU)
);
}

/* Tram 1 - ns=1;i=11100 */

static UA_StatusCode function_khongkhi_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Tram 1");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[1], 11000LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Tram 1"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_khongkhi_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11100LU)
);
}

/* PM2.5 - ns=1;i=11107 */

static UA_StatusCode function_khongkhi_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11107_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11107_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11107_variant_DataContents);
*variablenode_ns_1_i_11107_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11107_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "PM2.5");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ug/Nm3");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11107LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PM2.5"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11107_variant_DataContents);
return retVal;
}

static UA_StatusCode function_khongkhi_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11107LU)
);
}

/* PM10 - ns=1;i=11106 */

static UA_StatusCode function_khongkhi_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11106_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11106_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11106_variant_DataContents);
*variablenode_ns_1_i_11106_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11106_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "PM10");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ug/Nm3");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11106LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PM10"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11106_variant_DataContents);
return retVal;
}

static UA_StatusCode function_khongkhi_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11106LU)
);
}

/* O3 - ns=1;i=11105 */

static UA_StatusCode function_khongkhi_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11105_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11105_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11105_variant_DataContents);
*variablenode_ns_1_i_11105_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11105_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "O3");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ppb");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11105LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "O3"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11105_variant_DataContents);
return retVal;
}

static UA_StatusCode function_khongkhi_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11105LU)
);
}

/* SO2 - ns=1;i=11104 */

static UA_StatusCode function_khongkhi_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11104_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11104_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11104_variant_DataContents);
*variablenode_ns_1_i_11104_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11104_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "SO2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ppb");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11104LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SO2"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11104_variant_DataContents);
return retVal;
}

static UA_StatusCode function_khongkhi_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11104LU)
);
}

/* CO - ns=1;i=11103 */

static UA_StatusCode function_khongkhi_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11103_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11103_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11103_variant_DataContents);
*variablenode_ns_1_i_11103_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11103_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CO");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ppb");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11103LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CO"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11103_variant_DataContents);
return retVal;
}

static UA_StatusCode function_khongkhi_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11103LU)
);
}

/* NO2 - ns=1;i=11102 */

static UA_StatusCode function_khongkhi_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11102_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11102_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11102_variant_DataContents);
*variablenode_ns_1_i_11102_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11102_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "NO2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ppb");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11102LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NO2"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11102_variant_DataContents);
return retVal;
}

static UA_StatusCode function_khongkhi_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11102LU)
);
}

/* Temperature - ns=1;i=11101 */

static UA_StatusCode function_khongkhi_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11101_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11101_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11101_variant_DataContents);
*variablenode_ns_1_i_11101_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11101_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "degree C");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11101LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Temperature"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11101_variant_DataContents);
return retVal;
}

static UA_StatusCode function_khongkhi_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11101LU)
);
}

UA_StatusCode khongkhi(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "https://thesis.org/outstations/");

/* Load custom datatype definitions into the server */
if((retVal = function_khongkhi_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_khongkhi_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}
