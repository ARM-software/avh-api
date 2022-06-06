#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_services.h"



instance_services_t *instance_services_create(
    vpn_definition_t *vpn
    ) {
    instance_services_t *instance_services_local_var = malloc(sizeof(instance_services_t));
    if (!instance_services_local_var) {
        return NULL;
    }
    instance_services_local_var->vpn = vpn;

    return instance_services_local_var;
}


void instance_services_free(instance_services_t *instance_services) {
    if(NULL == instance_services){
        return ;
    }
    listEntry_t *listEntry;
    if (instance_services->vpn) {
        vpn_definition_free(instance_services->vpn);
        instance_services->vpn = NULL;
    }
    free(instance_services);
}

cJSON *instance_services_convertToJSON(instance_services_t *instance_services) {
    cJSON *item = cJSON_CreateObject();

    // instance_services->vpn
    if(instance_services->vpn) {
    cJSON *vpn_local_JSON = vpn_definition_convertToJSON(instance_services->vpn);
    if(vpn_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "vpn", vpn_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

instance_services_t *instance_services_parseFromJSON(cJSON *instance_servicesJSON){

    instance_services_t *instance_services_local_var = NULL;

    // define the local variable for instance_services->vpn
    vpn_definition_t *vpn_local_nonprim = NULL;

    // instance_services->vpn
    cJSON *vpn = cJSON_GetObjectItemCaseSensitive(instance_servicesJSON, "vpn");
    if (cJSON_IsNull(vpn)) {
        vpn = NULL;
    }
    if (vpn) { 
    vpn_local_nonprim = vpn_definition_parseFromJSON(vpn); //nonprimitive
    }


    instance_services_local_var = instance_services_create (
        vpn ? vpn_local_nonprim : NULL
        );

    return instance_services_local_var;
end:
    if (vpn_local_nonprim) {
        vpn_definition_free(vpn_local_nonprim);
        vpn_local_nonprim = NULL;
    }
    return NULL;

}
