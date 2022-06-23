/*
 * instance_services.h
 *
 * 
 */

#ifndef _instance_services_H_
#define _instance_services_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct instance_services_t instance_services_t;

#include "vpn_definition.h"



typedef struct instance_services_t {
    struct vpn_definition_t *vpn; //model

    int _library_owned; // Is the library responsible for freeing this object?
} instance_services_t;

__attribute__((deprecated)) instance_services_t *instance_services_create(
    vpn_definition_t *vpn
);

void instance_services_free(instance_services_t *instance_services);

instance_services_t *instance_services_parseFromJSON(cJSON *instance_servicesJSON);

cJSON *instance_services_convertToJSON(instance_services_t *instance_services);

#endif /* _instance_services_H_ */

