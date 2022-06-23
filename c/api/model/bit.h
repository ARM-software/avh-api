/*
 * bit.h
 *
 * Bit value
 */

#ifndef _bit_H_
#define _bit_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bit_t bit_t;


// Enum  for bit

typedef enum { arm_api_bit__NULL = 0, arm_api_bit___0, arm_api_bit___1 } arm_api_bit__e;

char* bit_bit_ToString(arm_api_bit__e bit);

arm_api_bit__e bit_bit_FromString(char* bit);

cJSON *bit_convertToJSON(arm_api_bit__e bit);

arm_api_bit__e bit_parseFromJSON(cJSON *bitJSON);

#endif /* _bit_H_ */

