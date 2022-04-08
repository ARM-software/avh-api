#ifndef instance_state_TEST
#define instance_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_state.h"
instance_state_t* instantiate_instance_state(int include_optional);



instance_state_t* instantiate_instance_state(int include_optional) {
  instance_state_t* instance_state = NULL;
  if (include_optional) {
    instance_state = instance_state_create(
    );
  } else {
    instance_state = instance_state_create(
    );
  }

  return instance_state;
}


#ifdef instance_state_MAIN

void test_instance_state(int include_optional) {
    instance_state_t* instance_state_1 = instantiate_instance_state(include_optional);

	cJSON* jsoninstance_state_1 = instance_state_convertToJSON(instance_state_1);
	printf("instance_state :\n%s\n", cJSON_Print(jsoninstance_state_1));
	instance_state_t* instance_state_2 = instance_state_parseFromJSON(jsoninstance_state_1);
	cJSON* jsoninstance_state_2 = instance_state_convertToJSON(instance_state_2);
	printf("repeating instance_state:\n%s\n", cJSON_Print(jsoninstance_state_2));
}

int main() {
  test_instance_state(1);
  test_instance_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_state_MAIN
#endif // instance_state_TEST
