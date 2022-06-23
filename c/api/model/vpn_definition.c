#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vpn_definition.h"



static vpn_definition_t *vpn_definition_create_internal(
    list_t *proxy,
    list_t *listeners
    ) {
    vpn_definition_t *vpn_definition_local_var = malloc(sizeof(vpn_definition_t));
    if (!vpn_definition_local_var) {
        return NULL;
    }
    vpn_definition_local_var->proxy = proxy;
    vpn_definition_local_var->listeners = listeners;

    vpn_definition_local_var->_library_owned = 1;
    return vpn_definition_local_var;
}

__attribute__((deprecated)) vpn_definition_t *vpn_definition_create(
    list_t *proxy,
    list_t *listeners
    ) {
    return vpn_definition_create_internal (
        proxy,
        listeners
        );
}

void vpn_definition_free(vpn_definition_t *vpn_definition) {
    if(NULL == vpn_definition){
        return ;
    }
    if(vpn_definition->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vpn_definition_free");
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

    // define the local list for vpn_definition->proxy
    list_t *proxyList = NULL;

    // define the local list for vpn_definition->listeners
    list_t *listenersList = NULL;

    // vpn_definition->proxy
    cJSON *proxy = cJSON_GetObjectItemCaseSensitive(vpn_definitionJSON, "proxy");
    if (cJSON_IsNull(proxy)) {
        proxy = NULL;
    }
    if (proxy) { 
    cJSON *proxy_local = NULL;
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
    if (cJSON_IsNull(listeners)) {
        listeners = NULL;
    }
    if (listeners) { 
    cJSON *listeners_local = NULL;
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


    vpn_definition_local_var = vpn_definition_create_internal (
        proxy ? proxyList : NULL,
        listeners ? listenersList : NULL
        );

    return vpn_definition_local_var;
end:
    if (proxyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, proxyList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(proxyList);
        proxyList = NULL;
    }
    if (listenersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, listenersList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(listenersList);
        listenersList = NULL;
    }
    return NULL;

}
