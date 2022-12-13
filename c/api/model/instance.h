/*
 * instance.h
 *
 * 
 */

#ifndef _instance_H_
#define _instance_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct instance_t instance_t;

#include "created_by.h"
#include "instance_boot_options.h"
#include "instance_netmon_state.h"
#include "instance_services.h"
#include "instance_state.h"



typedef struct instance_t {
    char *id; // string
    char *name; // string
    char *key; // string
    char *flavor; // string
    char *type; // string
    char *project; // string
    arm_api_instance_state__e state; //referenced enum
    char *state_changed; //date time
    char *started_at; // string
    char *user_task; // string
    char *task_state; // string
    char *error; // string
    struct instance_boot_options_t *boot_options; //model
    char *service_ip; // string
    char *wifi_ip; // string
    char *secondary_ip; // string
    struct instance_services_t *services; //model
    int panicked; //boolean
    char *created; //date time
    char *model; // string
    char *fwpackage; // string
    char *os; // string
    char *agent; // string
    struct instance_netmon_state_t *netmon; //model
    char *expose_port; // string
    int fault; //boolean
    list_t *patches; //primitive container
    struct created_by_t *created_by; //model

    int _library_owned; // Is the library responsible for freeing this object?
} instance_t;

__attribute__((deprecated)) instance_t *instance_create(
    char *id,
    char *name,
    char *key,
    char *flavor,
    char *type,
    char *project,
    arm_api_instance_state__e state,
    char *state_changed,
    char *started_at,
    char *user_task,
    char *task_state,
    char *error,
    instance_boot_options_t *boot_options,
    char *service_ip,
    char *wifi_ip,
    char *secondary_ip,
    instance_services_t *services,
    int panicked,
    char *created,
    char *model,
    char *fwpackage,
    char *os,
    char *agent,
    instance_netmon_state_t *netmon,
    char *expose_port,
    int fault,
    list_t *patches,
    created_by_t *created_by
);

void instance_free(instance_t *instance);

instance_t *instance_parseFromJSON(cJSON *instanceJSON);

cJSON *instance_convertToJSON(instance_t *instance);

#endif /* _instance_H_ */

