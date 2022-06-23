#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "peripherals_data.h"



static peripherals_data_t *peripherals_data_create_internal(
    list_t *acceleration,
    list_t *gyroscope,
    list_t *magnetic,
    list_t *orientation,
    double temperature,
    double proximity,
    double light,
    double pressure,
    double humidity
    ) {
    peripherals_data_t *peripherals_data_local_var = malloc(sizeof(peripherals_data_t));
    if (!peripherals_data_local_var) {
        return NULL;
    }
    peripherals_data_local_var->acceleration = acceleration;
    peripherals_data_local_var->gyroscope = gyroscope;
    peripherals_data_local_var->magnetic = magnetic;
    peripherals_data_local_var->orientation = orientation;
    peripherals_data_local_var->temperature = temperature;
    peripherals_data_local_var->proximity = proximity;
    peripherals_data_local_var->light = light;
    peripherals_data_local_var->pressure = pressure;
    peripherals_data_local_var->humidity = humidity;

    peripherals_data_local_var->_library_owned = 1;
    return peripherals_data_local_var;
}

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
    ) {
    return peripherals_data_create_internal (
        acceleration,
        gyroscope,
        magnetic,
        orientation,
        temperature,
        proximity,
        light,
        pressure,
        humidity
        );
}

void peripherals_data_free(peripherals_data_t *peripherals_data) {
    if(NULL == peripherals_data){
        return ;
    }
    if(peripherals_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "peripherals_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (peripherals_data->acceleration) {
        list_ForEach(listEntry, peripherals_data->acceleration) {
            free(listEntry->data);
        }
        list_freeList(peripherals_data->acceleration);
        peripherals_data->acceleration = NULL;
    }
    if (peripherals_data->gyroscope) {
        list_ForEach(listEntry, peripherals_data->gyroscope) {
            free(listEntry->data);
        }
        list_freeList(peripherals_data->gyroscope);
        peripherals_data->gyroscope = NULL;
    }
    if (peripherals_data->magnetic) {
        list_ForEach(listEntry, peripherals_data->magnetic) {
            free(listEntry->data);
        }
        list_freeList(peripherals_data->magnetic);
        peripherals_data->magnetic = NULL;
    }
    if (peripherals_data->orientation) {
        list_ForEach(listEntry, peripherals_data->orientation) {
            free(listEntry->data);
        }
        list_freeList(peripherals_data->orientation);
        peripherals_data->orientation = NULL;
    }
    free(peripherals_data);
}

cJSON *peripherals_data_convertToJSON(peripherals_data_t *peripherals_data) {
    cJSON *item = cJSON_CreateObject();

    // peripherals_data->acceleration
    if(peripherals_data->acceleration) {
    cJSON *acceleration = cJSON_AddArrayToObject(item, "acceleration");
    if(acceleration == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *accelerationListEntry;
    list_ForEach(accelerationListEntry, peripherals_data->acceleration) {
    if(cJSON_AddNumberToObject(acceleration, "", *(double *)accelerationListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // peripherals_data->gyroscope
    if(peripherals_data->gyroscope) {
    cJSON *gyroscope = cJSON_AddArrayToObject(item, "gyroscope");
    if(gyroscope == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *gyroscopeListEntry;
    list_ForEach(gyroscopeListEntry, peripherals_data->gyroscope) {
    if(cJSON_AddNumberToObject(gyroscope, "", *(double *)gyroscopeListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // peripherals_data->magnetic
    if(peripherals_data->magnetic) {
    cJSON *magnetic = cJSON_AddArrayToObject(item, "magnetic");
    if(magnetic == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *magneticListEntry;
    list_ForEach(magneticListEntry, peripherals_data->magnetic) {
    if(cJSON_AddNumberToObject(magnetic, "", *(double *)magneticListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // peripherals_data->orientation
    if(peripherals_data->orientation) {
    cJSON *orientation = cJSON_AddArrayToObject(item, "orientation");
    if(orientation == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *orientationListEntry;
    list_ForEach(orientationListEntry, peripherals_data->orientation) {
    if(cJSON_AddNumberToObject(orientation, "", *(double *)orientationListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // peripherals_data->temperature
    if(peripherals_data->temperature) {
    if(cJSON_AddNumberToObject(item, "temperature", peripherals_data->temperature) == NULL) {
    goto fail; //Numeric
    }
    }


    // peripherals_data->proximity
    if(peripherals_data->proximity) {
    if(cJSON_AddNumberToObject(item, "proximity", peripherals_data->proximity) == NULL) {
    goto fail; //Numeric
    }
    }


    // peripherals_data->light
    if(peripherals_data->light) {
    if(cJSON_AddNumberToObject(item, "light", peripherals_data->light) == NULL) {
    goto fail; //Numeric
    }
    }


    // peripherals_data->pressure
    if(peripherals_data->pressure) {
    if(cJSON_AddNumberToObject(item, "pressure", peripherals_data->pressure) == NULL) {
    goto fail; //Numeric
    }
    }


    // peripherals_data->humidity
    if(peripherals_data->humidity) {
    if(cJSON_AddNumberToObject(item, "humidity", peripherals_data->humidity) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

peripherals_data_t *peripherals_data_parseFromJSON(cJSON *peripherals_dataJSON){

    peripherals_data_t *peripherals_data_local_var = NULL;

    // define the local list for peripherals_data->acceleration
    list_t *accelerationList = NULL;

    // define the local list for peripherals_data->gyroscope
    list_t *gyroscopeList = NULL;

    // define the local list for peripherals_data->magnetic
    list_t *magneticList = NULL;

    // define the local list for peripherals_data->orientation
    list_t *orientationList = NULL;

    // peripherals_data->acceleration
    cJSON *acceleration = cJSON_GetObjectItemCaseSensitive(peripherals_dataJSON, "acceleration");
    if (cJSON_IsNull(acceleration)) {
        acceleration = NULL;
    }
    if (acceleration) { 
    cJSON *acceleration_local = NULL;
    if(!cJSON_IsArray(acceleration)) {
        goto end;//primitive container
    }
    accelerationList = list_createList();

    cJSON_ArrayForEach(acceleration_local, acceleration)
    {
        if(!cJSON_IsNumber(acceleration_local))
        {
            goto end;
        }
        double *acceleration_local_value = (double *)calloc(1, sizeof(double));
        if(!acceleration_local_value)
        {
            goto end;
        }
        *acceleration_local_value = acceleration_local->valuedouble;
        list_addElement(accelerationList , acceleration_local_value);
    }
    }

    // peripherals_data->gyroscope
    cJSON *gyroscope = cJSON_GetObjectItemCaseSensitive(peripherals_dataJSON, "gyroscope");
    if (cJSON_IsNull(gyroscope)) {
        gyroscope = NULL;
    }
    if (gyroscope) { 
    cJSON *gyroscope_local = NULL;
    if(!cJSON_IsArray(gyroscope)) {
        goto end;//primitive container
    }
    gyroscopeList = list_createList();

    cJSON_ArrayForEach(gyroscope_local, gyroscope)
    {
        if(!cJSON_IsNumber(gyroscope_local))
        {
            goto end;
        }
        double *gyroscope_local_value = (double *)calloc(1, sizeof(double));
        if(!gyroscope_local_value)
        {
            goto end;
        }
        *gyroscope_local_value = gyroscope_local->valuedouble;
        list_addElement(gyroscopeList , gyroscope_local_value);
    }
    }

    // peripherals_data->magnetic
    cJSON *magnetic = cJSON_GetObjectItemCaseSensitive(peripherals_dataJSON, "magnetic");
    if (cJSON_IsNull(magnetic)) {
        magnetic = NULL;
    }
    if (magnetic) { 
    cJSON *magnetic_local = NULL;
    if(!cJSON_IsArray(magnetic)) {
        goto end;//primitive container
    }
    magneticList = list_createList();

    cJSON_ArrayForEach(magnetic_local, magnetic)
    {
        if(!cJSON_IsNumber(magnetic_local))
        {
            goto end;
        }
        double *magnetic_local_value = (double *)calloc(1, sizeof(double));
        if(!magnetic_local_value)
        {
            goto end;
        }
        *magnetic_local_value = magnetic_local->valuedouble;
        list_addElement(magneticList , magnetic_local_value);
    }
    }

    // peripherals_data->orientation
    cJSON *orientation = cJSON_GetObjectItemCaseSensitive(peripherals_dataJSON, "orientation");
    if (cJSON_IsNull(orientation)) {
        orientation = NULL;
    }
    if (orientation) { 
    cJSON *orientation_local = NULL;
    if(!cJSON_IsArray(orientation)) {
        goto end;//primitive container
    }
    orientationList = list_createList();

    cJSON_ArrayForEach(orientation_local, orientation)
    {
        if(!cJSON_IsNumber(orientation_local))
        {
            goto end;
        }
        double *orientation_local_value = (double *)calloc(1, sizeof(double));
        if(!orientation_local_value)
        {
            goto end;
        }
        *orientation_local_value = orientation_local->valuedouble;
        list_addElement(orientationList , orientation_local_value);
    }
    }

    // peripherals_data->temperature
    cJSON *temperature = cJSON_GetObjectItemCaseSensitive(peripherals_dataJSON, "temperature");
    if (cJSON_IsNull(temperature)) {
        temperature = NULL;
    }
    if (temperature) { 
    if(!cJSON_IsNumber(temperature))
    {
    goto end; //Numeric
    }
    }

    // peripherals_data->proximity
    cJSON *proximity = cJSON_GetObjectItemCaseSensitive(peripherals_dataJSON, "proximity");
    if (cJSON_IsNull(proximity)) {
        proximity = NULL;
    }
    if (proximity) { 
    if(!cJSON_IsNumber(proximity))
    {
    goto end; //Numeric
    }
    }

    // peripherals_data->light
    cJSON *light = cJSON_GetObjectItemCaseSensitive(peripherals_dataJSON, "light");
    if (cJSON_IsNull(light)) {
        light = NULL;
    }
    if (light) { 
    if(!cJSON_IsNumber(light))
    {
    goto end; //Numeric
    }
    }

    // peripherals_data->pressure
    cJSON *pressure = cJSON_GetObjectItemCaseSensitive(peripherals_dataJSON, "pressure");
    if (cJSON_IsNull(pressure)) {
        pressure = NULL;
    }
    if (pressure) { 
    if(!cJSON_IsNumber(pressure))
    {
    goto end; //Numeric
    }
    }

    // peripherals_data->humidity
    cJSON *humidity = cJSON_GetObjectItemCaseSensitive(peripherals_dataJSON, "humidity");
    if (cJSON_IsNull(humidity)) {
        humidity = NULL;
    }
    if (humidity) { 
    if(!cJSON_IsNumber(humidity))
    {
    goto end; //Numeric
    }
    }


    peripherals_data_local_var = peripherals_data_create_internal (
        acceleration ? accelerationList : NULL,
        gyroscope ? gyroscopeList : NULL,
        magnetic ? magneticList : NULL,
        orientation ? orientationList : NULL,
        temperature ? temperature->valuedouble : 0,
        proximity ? proximity->valuedouble : 0,
        light ? light->valuedouble : 0,
        pressure ? pressure->valuedouble : 0,
        humidity ? humidity->valuedouble : 0
        );

    return peripherals_data_local_var;
end:
    if (accelerationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accelerationList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accelerationList);
        accelerationList = NULL;
    }
    if (gyroscopeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, gyroscopeList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(gyroscopeList);
        gyroscopeList = NULL;
    }
    if (magneticList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, magneticList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(magneticList);
        magneticList = NULL;
    }
    if (orientationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, orientationList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(orientationList);
        orientationList = NULL;
    }
    return NULL;

}
