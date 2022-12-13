#ifndef instance_TEST
#define instance_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance.h"
instance_t* instantiate_instance(int include_optional);

#include "test_instance_boot_options.c"
#include "test_instance_services.c"
#include "test_instance_netmon_state.c"
#include "test_created_by.c"


instance_t* instantiate_instance(int include_optional) {
  instance_t* instance = NULL;
  if (include_optional) {
    instance = instance_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      arm_api_instance__on,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_instance_boot_options(0),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_instance_services(0),
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_instance_netmon_state(0),
      "0",
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_created_by(0)
    );
  } else {
    instance = instance_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      arm_api_instance__on,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      NULL,
      "0",
      "0",
      "0",
      NULL,
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      NULL,
      "0",
      1,
      list_createList(),
      NULL
    );
  }

  return instance;
}


#ifdef instance_MAIN

void test_instance(int include_optional) {
    instance_t* instance_1 = instantiate_instance(include_optional);

	cJSON* jsoninstance_1 = instance_convertToJSON(instance_1);
	printf("instance :\n%s\n", cJSON_Print(jsoninstance_1));
	instance_t* instance_2 = instance_parseFromJSON(jsoninstance_1);
	cJSON* jsoninstance_2 = instance_convertToJSON(instance_2);
	printf("repeating instance:\n%s\n", cJSON_Print(jsoninstance_2));
}

int main() {
  test_instance(1);
  test_instance(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_MAIN
#endif // instance_TEST
