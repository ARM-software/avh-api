/*
 * button.h
 *
 * Button definition
 */

#ifndef _button_H_
#define _button_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct button_t button_t;


// Enum  for button

typedef enum { arm_api_button__NULL = 0, arm_api_button__finger, arm_api_button__homeButton, arm_api_button__holdButton, arm_api_button__volumeUp, arm_api_button__volumeDown, arm_api_button__ringerSwitch, arm_api_button__backButton, arm_api_button__overviewButton } arm_api_button__e;

char* button_button_ToString(arm_api_button__e button);

arm_api_button__e button_button_FromString(char* button);

cJSON *button_convertToJSON(arm_api_button__e button);

arm_api_button__e button_parseFromJSON(cJSON *buttonJSON);

#endif /* _button_H_ */

