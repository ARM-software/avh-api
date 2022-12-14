#ifndef instance_netmon_state_TEST
#define instance_netmon_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_netmon_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_netmon_state.h"
instance_netmon_state_t* instantiate_instance_netmon_state(int include_optional);



instance_netmon_state_t* instantiate_instance_netmon_state(int include_optional) {
  instance_netmon_state_t* instance_netmon_state = NULL;
  if (include_optional) {
    instance_netmon_state = instance_netmon_state_create(
      "0",
      "0",
      1
    );
  } else {
    instance_netmon_state = instance_netmon_state_create(
      "0",
      "0",
      1
    );
  }

  return instance_netmon_state;
}


#ifdef instance_netmon_state_MAIN

void test_instance_netmon_state(int include_optional) {
    instance_netmon_state_t* instance_netmon_state_1 = instantiate_instance_netmon_state(include_optional);

	cJSON* jsoninstance_netmon_state_1 = instance_netmon_state_convertToJSON(instance_netmon_state_1);
	printf("instance_netmon_state :\n%s\n", cJSON_Print(jsoninstance_netmon_state_1));
	instance_netmon_state_t* instance_netmon_state_2 = instance_netmon_state_parseFromJSON(jsoninstance_netmon_state_1);
	cJSON* jsoninstance_netmon_state_2 = instance_netmon_state_convertToJSON(instance_netmon_state_2);
	printf("repeating instance_netmon_state:\n%s\n", cJSON_Print(jsoninstance_netmon_state_2));
}

int main() {
  test_instance_netmon_state(1);
  test_instance_netmon_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_netmon_state_MAIN
#endif // instance_netmon_state_TEST
