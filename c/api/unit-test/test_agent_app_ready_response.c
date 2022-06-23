#ifndef agent_app_ready_response_TEST
#define agent_app_ready_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_app_ready_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_app_ready_response.h"
agent_app_ready_response_t* instantiate_agent_app_ready_response(int include_optional);



agent_app_ready_response_t* instantiate_agent_app_ready_response(int include_optional) {
  agent_app_ready_response_t* agent_app_ready_response = NULL;
  if (include_optional) {
    agent_app_ready_response = agent_app_ready_response_create(
      1
    );
  } else {
    agent_app_ready_response = agent_app_ready_response_create(
      1
    );
  }

  return agent_app_ready_response;
}


#ifdef agent_app_ready_response_MAIN

void test_agent_app_ready_response(int include_optional) {
    agent_app_ready_response_t* agent_app_ready_response_1 = instantiate_agent_app_ready_response(include_optional);

	cJSON* jsonagent_app_ready_response_1 = agent_app_ready_response_convertToJSON(agent_app_ready_response_1);
	printf("agent_app_ready_response :\n%s\n", cJSON_Print(jsonagent_app_ready_response_1));
	agent_app_ready_response_t* agent_app_ready_response_2 = agent_app_ready_response_parseFromJSON(jsonagent_app_ready_response_1);
	cJSON* jsonagent_app_ready_response_2 = agent_app_ready_response_convertToJSON(agent_app_ready_response_2);
	printf("repeating agent_app_ready_response:\n%s\n", cJSON_Print(jsonagent_app_ready_response_2));
}

int main() {
  test_agent_app_ready_response(1);
  test_agent_app_ready_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_app_ready_response_MAIN
#endif // agent_app_ready_response_TEST
