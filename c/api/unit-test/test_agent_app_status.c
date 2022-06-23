#ifndef agent_app_status_TEST
#define agent_app_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_app_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_app_status.h"
agent_app_status_t* instantiate_agent_app_status(int include_optional);



agent_app_status_t* instantiate_agent_app_status(int include_optional) {
  agent_app_status_t* agent_app_status = NULL;
  if (include_optional) {
    agent_app_status = agent_app_status_create(
      1,
      "0"
    );
  } else {
    agent_app_status = agent_app_status_create(
      1,
      "0"
    );
  }

  return agent_app_status;
}


#ifdef agent_app_status_MAIN

void test_agent_app_status(int include_optional) {
    agent_app_status_t* agent_app_status_1 = instantiate_agent_app_status(include_optional);

	cJSON* jsonagent_app_status_1 = agent_app_status_convertToJSON(agent_app_status_1);
	printf("agent_app_status :\n%s\n", cJSON_Print(jsonagent_app_status_1));
	agent_app_status_t* agent_app_status_2 = agent_app_status_parseFromJSON(jsonagent_app_status_1);
	cJSON* jsonagent_app_status_2 = agent_app_status_convertToJSON(agent_app_status_2);
	printf("repeating agent_app_status:\n%s\n", cJSON_Print(jsonagent_app_status_2));
}

int main() {
  test_agent_app_status(1);
  test_agent_app_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_app_status_MAIN
#endif // agent_app_status_TEST
