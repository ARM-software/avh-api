#ifndef agent_app_TEST
#define agent_app_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_app_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_app.h"
agent_app_t* instantiate_agent_app(int include_optional);



agent_app_t* instantiate_agent_app(int include_optional) {
  agent_app_t* agent_app = NULL;
  if (include_optional) {
    agent_app = agent_app_create(
      list_createList(),
      1,
      56,
      56,
      "0",
      "0",
      "0"
    );
  } else {
    agent_app = agent_app_create(
      list_createList(),
      1,
      56,
      56,
      "0",
      "0",
      "0"
    );
  }

  return agent_app;
}


#ifdef agent_app_MAIN

void test_agent_app(int include_optional) {
    agent_app_t* agent_app_1 = instantiate_agent_app(include_optional);

	cJSON* jsonagent_app_1 = agent_app_convertToJSON(agent_app_1);
	printf("agent_app :\n%s\n", cJSON_Print(jsonagent_app_1));
	agent_app_t* agent_app_2 = agent_app_parseFromJSON(jsonagent_app_1);
	cJSON* jsonagent_app_2 = agent_app_convertToJSON(agent_app_2);
	printf("repeating agent_app:\n%s\n", cJSON_Print(jsonagent_app_2));
}

int main() {
  test_agent_app(1);
  test_agent_app(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_app_MAIN
#endif // agent_app_TEST
