#include <stdio.h>
#include "../open62541/open62541.h"

int main(int argc, char *argv[])
{
    /* Create a client and connect */
    UA_Client *client = UA_Client_new();
    UA_ClientConfig_setDefault(UA_Client_getConfig(client));
    UA_StatusCode status = UA_Client_connect(client, "opc.tcp://localhost:4840");
    if(status != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return status;
    }

    /* Read the value attribute of the node. UA_Client_readValueAttribute is a
     * wrapper for the raw read service available as UA_Client_Service_read. */
    UA_Variant value; /* Variants can hold scalar values and arrays of any type */
    UA_Variant_init(&value);
    status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(2, "TS1_Temperature"), &value);
    if(status == UA_STATUSCODE_GOOD &&
       UA_Variant_hasScalarType(&value, &UA_TYPES[UA_TYPES_FLOAT])) {
        printf("The temperature is: %f\n", *(UA_Float*)value.data);
    }

    /* Clean up */
    UA_Variant_clear(&value);
    UA_Client_delete(client); /* Disconnects the client internally */
    return status;
}
