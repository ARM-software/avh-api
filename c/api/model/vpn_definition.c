#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vpn_definition.h"



vpn_definition_t *vpn_definition_create(
    list_t *proxy,
    list_t *listeners
    ) {
    vpn_definition_t *vpn_definition_local_var = malloc(sizeof(vpn_definition_t));
    if (!vpn_definition_local_var) {
        return NULL;
    }
    vpn_definition_local_var->proxy = proxy;
    vpn_definition_local_var->listeners = listeners;

    return vpn_definition_local_var;
}


void vpn_definition_free(vpn_definition_t *vpn_definition) {
    if(NULL == vpn_definition){
        return ;
    }
    listEntry_t *listEntry;
    if (vpn_definition->proxy) {
        list_ForEach(listEntry, vpn_definition->proxy) {
            free(listEntry->data);
        }
        list_freeList(vpn_definition->proxy);
        vpn_definition->proxy = NULL;
    }
    if (vpn_definition->listeners) {
        list_ForEach(listEntry, vpn_definition->listeners) {
            free(listEntry->data);
        }
        list_freeList(vpn_definition->listeners);
        vpn_definition->listeners = NULL;
    }
    free(vpn_definition);
}

cJSON *vpn_definition_convertToJSON(vpn_definition_t *vpn_definition) {
    cJSON *item = cJSON_CreateObject();

    // vpn_definition->proxy
    if(vpn_definition->proxy) { 
    cJSON *proxy = cJSON_AddArrayToObject(item, "proxy");
    if(proxy == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *proxyListEntry;
    list_ForEach(proxyListEntry, vpn_definition->proxy) {
    if(cJSON_AddStringToObject(proxy, "", (char*)proxyListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // vpn_definition->listeners
    if(vpn_definition->listeners) { 
    cJSON *listeners = cJSON_AddArrayToObject(item, "listeners");
    if(listeners == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *listenersListEntry;
    list_ForEach(listenersListEntry, vpn_definition->listeners) {
    if(cJSON_AddStringToObject(listeners, "", (char*)listenersListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vpn_definition_t *vpn_definition_parseFromJSON(cJSON *vpn_definitionJSON){

    vpn_definition_t *vpn_definition_local_var = NULL;

    // vpn_definition->proxy
    cJSON *proxy = cJSON_GetObjectItemCaseSensitive(vpn_definitionJSON, "proxy");
    list_t *proxyList;
    if (proxy) { 
    cJSON *proxy_local;
    if(!cJSON_IsArray(proxy)) {
        goto end;//primitive container
    }
    proxyList = list_createList();

    cJSON_ArrayForEach(proxy_local, proxy)
    {
        if(!cJSON_IsString(proxy_local))
        {
            goto end;
        }
        list_addElement(proxyList , strdup(proxy_local->valuestring));
    }
    }

    // vpn_definition->listeners
    cJSON *listeners = cJSON_GetObjectItemCaseSensitive(vpn_definitionJSON, "listeners");
    list_t *listenersList;
    if (listeners) { 
    cJSON *listeners_local;
    if(!cJSON_IsArray(listeners)) {
        goto end;//primitive container
    }
    listenersList = list_createList();

    cJSON_ArrayForEach(listeners_local, listeners)
    {
        if(!cJSON_IsString(listeners_local))
        {
            goto end;
        }
        list_addElement(listenersList , strdup(listeners_local->valuestring));
    }
    }


    vpn_definition_local_var = vpn_definition_create (
        proxy ? proxyList : NULL,
        listeners ? listenersList : NULL
        );

    return vpn_definition_local_var;
end:
    return NULL;

}
