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

#include "instance_boot_options.h"
#include "instance_netmon_state.h"
#include "instance_services.h"
#include "instance_state.h"

// Enum  for instance

typedef enum  { arm_api_instance__NULL = 0, arm_api_instance__on, arm_api_instance__off, arm_api_instance__deleting, arm_api_instance__creating, arm_api_instance__restoring, arm_api_instance__paused, arm_api_instance__rebooting, arm_api_instance__error } arm_api_instance__e;

char* instance_state_ToString(arm_api_instance__e state);

arm_api_instance__e instance_state_FromString(char* state);



typedef struct instance_t {
    char *id; // string
    char *name; // string
    char *key; // string
    char *flavor; // string
    char *type; // string
    char *project; // string
    instance_state_t *state; // custom
    char *state_changed; //date time
    char *user_task; // string
    char *task_state; // string
    char *error; // string
    struct instance_boot_options_t *boot_options; //model
    char *service_ip; // string
    char *wifi_ip; // string
    struct instance_services_t *services; //model
    int panicked; //boolean
    char *created; //date time
    char *model; // string
    char *ipsw; // string
    char *os; // string
    char *agent; // string
    struct instance_netmon_state_t *netmon; //model
    char *expose_port; // string
    int fault; //boolean
    list_t *patches; //primitive container

} instance_t;

instance_t *instance_create(
    char *id,
    char *name,
    char *key,
    char *flavor,
    char *type,
    char *project,
    instance_state_t *state,
    char *state_changed,
    char *user_task,
    char *task_state,
    char *error,
    instance_boot_options_t *boot_options,
    char *service_ip,
    char *wifi_ip,
    instance_services_t *services,
    int panicked,
    char *created,
    char *model,
    char *ipsw,
    char *os,
    char *agent,
    instance_netmon_state_t *netmon,
    char *expose_port,
    int fault,
    list_t *patches
);

void instance_free(instance_t *instance);

instance_t *instance_parseFromJSON(cJSON *instanceJSON);

cJSON *instance_convertToJSON(instance_t *instance);

#endif /* _instance_H_ */

