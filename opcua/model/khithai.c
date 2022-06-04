/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "khithai.h"


/* Khi Thai - ns=1;i=10000 */

static UA_StatusCode function_model_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Khi Thai");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 10000LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Khi Thai"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_model_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10000LU)
);
}

/* KCN Long Thanh - ns=1;i=11000 */

static UA_StatusCode function_model_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "KCN Long Thanh");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 11000LU),
UA_NODEID_NUMERIC(ns[1], 10000LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "KCN Long Thanh"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_model_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11000LU)
);
}

/* Tram 1 - ns=1;i=11100 */

static UA_StatusCode function_model_2_begin(UA_Server *server, UA_UInt16* ns) {
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

static UA_StatusCode function_model_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11100LU)
);
}

/* PM - ns=1;i=11111 */

static UA_StatusCode function_model_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11111_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11111_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11111_variant_DataContents);
*variablenode_ns_1_i_11111_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11111_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "PM");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "mg/m3");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11111LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PM"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11111_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11111LU)
);
}

/* Hg - ns=1;i=11110 */

static UA_StatusCode function_model_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11110_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11110_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11110_variant_DataContents);
*variablenode_ns_1_i_11110_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11110_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Hg");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "mg/m3");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11110LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Hg vapour"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11110_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11110LU)
);
}

/* NH3 - ns=1;i=11109 */

static UA_StatusCode function_model_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11109_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11109_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11109_variant_DataContents);
*variablenode_ns_1_i_11109_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11109_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "NH3");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ppm");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11109LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NH3"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11109_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11109LU)
);
}

/* H2S - ns=1;i=11108 */

static UA_StatusCode function_model_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11108_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11108_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11108_variant_DataContents);
*variablenode_ns_1_i_11108_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11108_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "H2S");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ppm");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11108LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "H2S"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11108_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11108LU)
);
}

/* O2 - ns=1;i=11107 */

static UA_StatusCode function_model_7_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "O2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "%V");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11107LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "O2"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11107_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11107LU)
);
}

/* SO2 - ns=1;i=11106 */

static UA_StatusCode function_model_8_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "SO2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ppm");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11106LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SO2"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11106_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11106LU)
);
}

/* CO - ns=1;i=11105 */

static UA_StatusCode function_model_9_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "CO");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ppm");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11105LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CO"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11105_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11105LU)
);
}

/* NO2 - ns=1;i=11104 */

static UA_StatusCode function_model_10_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "NO2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ppm");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11104LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NO2"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11104_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11104LU)
);
}

/* NO - ns=1;i=11103 */

static UA_StatusCode function_model_11_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "NO");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ppm");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11103LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NO"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11103_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11103LU)
);
}

/* Pressure - ns=1;i=11102 */

static UA_StatusCode function_model_12_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "Pressure");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "kPa");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11102LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Pressure"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11102_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11102LU)
);
}

/*Write value*/

static UA_StatusCode function_model_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
UA_Float *variablenode_ns_1_i_11114_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_11114_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_11114_variant_DataContents);
*variablenode_ns_1_i_11114_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11114_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Write");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "kPa");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11114LU),
UA_NODEID_NUMERIC(ns[1], 11100LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Write"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_11114_variant_DataContents);
return retVal;
}

static UA_StatusCode function_model_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11114LU)
);
}




/* Temperature - ns=1;i=11101 */

static UA_StatusCode function_model_13_begin(UA_Server *server, UA_UInt16* ns) {
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

static UA_StatusCode function_model_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11101LU)
);
}

UA_StatusCode model(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "https://thesis.org/outstations/");

/* Load custom datatype definitions into the server */
if((retVal = function_model_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_10_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_11_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_12_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_13_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_14_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_14_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_13_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_12_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_11_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_10_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_model_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}
