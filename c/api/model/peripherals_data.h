/*
 * peripherals_data.h
 *
 * 
 */

#ifndef _peripherals_data_H_
#define _peripherals_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct peripherals_data_t peripherals_data_t;




typedef struct peripherals_data_t {
    list_t *acceleration; //primitive container
    list_t *gyroscope; //primitive container
    list_t *magnetic; //primitive container
    list_t *orientation; //primitive container
    double temperature; //numeric
    double proximity; //numeric
    double light; //numeric
    double pressure; //numeric
    double humidity; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} peripherals_data_t;

__attribute__((deprecated)) peripherals_data_t *peripherals_data_create(
    list_t *acceleration,
    list_t *gyroscope,
    list_t *magnetic,
    list_t *orientation,
    double temperature,
    double proximity,
    double light,
    double pressure,
    double humidity
);

void peripherals_data_free(peripherals_data_t *peripherals_data);

peripherals_data_t *peripherals_data_parseFromJSON(cJSON *peripherals_dataJSON);

cJSON *peripherals_data_convertToJSON(peripherals_data_t *peripherals_data);

#endif /* _peripherals_data_H_ */

