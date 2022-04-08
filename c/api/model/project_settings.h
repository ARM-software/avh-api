/*
 * project_settings.h
 *
 * 
 */

#ifndef _project_settings_H_
#define _project_settings_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_settings_t project_settings_t;




typedef struct project_settings_t {
    double version; //numeric
    int internet_access; //boolean
    int dhcp; //boolean

} project_settings_t;

project_settings_t *project_settings_create(
    double version,
    int internet_access,
    int dhcp
);

void project_settings_free(project_settings_t *project_settings);

project_settings_t *project_settings_parseFromJSON(cJSON *project_settingsJSON);

cJSON *project_settings_convertToJSON(project_settings_t *project_settings);

#endif /* _project_settings_H_ */

