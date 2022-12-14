#ifndef instance_agent_state_TEST
#define instance_agent_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_agent_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_agent_state.h"
instance_agent_state_t* instantiate_instance_agent_state(int include_optional);



instance_agent_state_t* instantiate_instance_agent_state(int include_optional) {
  instance_agent_state_t* instance_agent_state = NULL;
  if (include_optional) {
    instance_agent_state = instance_agent_state_create(
      "0",
      "0"
    );
  } else {
    instance_agent_state = instance_agent_state_create(
      "0",
      "0"
    );
  }

  return instance_agent_state;
}


#ifdef instance_agent_state_MAIN

void test_instance_agent_state(int include_optional) {
    instance_agent_state_t* instance_agent_state_1 = instantiate_instance_agent_state(include_optional);

	cJSON* jsoninstance_agent_state_1 = instance_agent_state_convertToJSON(instance_agent_state_1);
	printf("instance_agent_state :\n%s\n", cJSON_Print(jsoninstance_agent_state_1));
	instance_agent_state_t* instance_agent_state_2 = instance_agent_state_parseFromJSON(jsoninstance_agent_state_1);
	cJSON* jsoninstance_agent_state_2 = instance_agent_state_convertToJSON(instance_agent_state_2);
	printf("repeating instance_agent_state:\n%s\n", cJSON_Print(jsoninstance_agent_state_2));
}

int main() {
  test_instance_agent_state(1);
  test_instance_agent_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_agent_state_MAIN
#endif // instance_agent_state_TEST
