#ifndef agent_system_get_prop_body_TEST
#define agent_system_get_prop_body_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_system_get_prop_body_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_system_get_prop_body.h"
agent_system_get_prop_body_t* instantiate_agent_system_get_prop_body(int include_optional);



agent_system_get_prop_body_t* instantiate_agent_system_get_prop_body(int include_optional) {
  agent_system_get_prop_body_t* agent_system_get_prop_body = NULL;
  if (include_optional) {
    agent_system_get_prop_body = agent_system_get_prop_body_create(
      "0"
    );
  } else {
    agent_system_get_prop_body = agent_system_get_prop_body_create(
      "0"
    );
  }

  return agent_system_get_prop_body;
}


#ifdef agent_system_get_prop_body_MAIN

void test_agent_system_get_prop_body(int include_optional) {
    agent_system_get_prop_body_t* agent_system_get_prop_body_1 = instantiate_agent_system_get_prop_body(include_optional);

	cJSON* jsonagent_system_get_prop_body_1 = agent_system_get_prop_body_convertToJSON(agent_system_get_prop_body_1);
	printf("agent_system_get_prop_body :\n%s\n", cJSON_Print(jsonagent_system_get_prop_body_1));
	agent_system_get_prop_body_t* agent_system_get_prop_body_2 = agent_system_get_prop_body_parseFromJSON(jsonagent_system_get_prop_body_1);
	cJSON* jsonagent_system_get_prop_body_2 = agent_system_get_prop_body_convertToJSON(agent_system_get_prop_body_2);
	printf("repeating agent_system_get_prop_body:\n%s\n", cJSON_Print(jsonagent_system_get_prop_body_2));
}

int main() {
  test_agent_system_get_prop_body(1);
  test_agent_system_get_prop_body(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_system_get_prop_body_MAIN
#endif // agent_system_get_prop_body_TEST
