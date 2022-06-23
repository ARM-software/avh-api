#ifndef agent_error_TEST
#define agent_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_error.h"
agent_error_t* instantiate_agent_error(int include_optional);



agent_error_t* instantiate_agent_error(int include_optional) {
  agent_error_t* agent_error = NULL;
  if (include_optional) {
    agent_error = agent_error_create(
      "0",
      arm_api_agent_error_ERRORID_AgentError,
      0
    );
  } else {
    agent_error = agent_error_create(
      "0",
      arm_api_agent_error_ERRORID_AgentError,
      0
    );
  }

  return agent_error;
}


#ifdef agent_error_MAIN

void test_agent_error(int include_optional) {
    agent_error_t* agent_error_1 = instantiate_agent_error(include_optional);

	cJSON* jsonagent_error_1 = agent_error_convertToJSON(agent_error_1);
	printf("agent_error :\n%s\n", cJSON_Print(jsonagent_error_1));
	agent_error_t* agent_error_2 = agent_error_parseFromJSON(jsonagent_error_1);
	cJSON* jsonagent_error_2 = agent_error_convertToJSON(agent_error_2);
	printf("repeating agent_error:\n%s\n", cJSON_Print(jsonagent_error_2));
}

int main() {
  test_agent_error(1);
  test_agent_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_error_MAIN
#endif // agent_error_TEST
