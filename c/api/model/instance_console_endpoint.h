/*
 * instance_console_endpoint.h
 *
 * 
 */

#ifndef _instance_console_endpoint_H_
#define _instance_console_endpoint_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct instance_console_endpoint_t instance_console_endpoint_t;




typedef struct instance_console_endpoint_t {
    char *url; // string

} instance_console_endpoint_t;

instance_console_endpoint_t *instance_console_endpoint_create(
    char *url
);

void instance_console_endpoint_free(instance_console_endpoint_t *instance_console_endpoint);

instance_console_endpoint_t *instance_console_endpoint_parseFromJSON(cJSON *instance_console_endpointJSON);

cJSON *instance_console_endpoint_convertToJSON(instance_console_endpoint_t *instance_console_endpoint);

#endif /* _instance_console_endpoint_H_ */

