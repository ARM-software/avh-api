/*
 * features.h
 *
 * 
 */

#ifndef _features_H_
#define _features_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct features_t features_t;




typedef struct features_t {
    int apps; //boolean
    int connect; //boolean
    int console; //boolean
    int coretrace; //boolean
    int device_control; //boolean
    int device_delete; //boolean
    int files; //boolean
    int frida; //boolean
    int images; //boolean
    int messaging; //boolean
    int netmon; //boolean
    int network; //boolean
    int port_forwarding; //boolean
    int power_management; //boolean
    int profile; //boolean
    int sensors; //boolean
    int settings; //boolean
    int snapshots; //boolean
    int strace; //boolean
    int system; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} features_t;

__attribute__((deprecated)) features_t *features_create(
    int apps,
    int connect,
    int console,
    int coretrace,
    int device_control,
    int device_delete,
    int files,
    int frida,
    int images,
    int messaging,
    int netmon,
    int network,
    int port_forwarding,
    int power_management,
    int profile,
    int sensors,
    int settings,
    int snapshots,
    int strace,
    int system
);

void features_free(features_t *features);

features_t *features_parseFromJSON(cJSON *featuresJSON);

cJSON *features_convertToJSON(features_t *features);

#endif /* _features_H_ */

