/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

#include <signal.h>
#include <stdio.h>
#include "../open62541/open62541.h"
#include "../model/nuocmat.h"
#include "sub/nuocmat.h"


UA_Boolean running = true;

static void stopHandler(int sign)
{
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
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
    UA_StatusCode retval = nuocmat(server);
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
    add_nuocmat(server);

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

