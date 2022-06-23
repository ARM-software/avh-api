#ifndef agent_apps_list_TEST
#define agent_apps_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_apps_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_apps_list.h"
agent_apps_list_t* instantiate_agent_apps_list(int include_optional);



agent_apps_list_t* instantiate_agent_apps_list(int include_optional) {
  agent_apps_list_t* agent_apps_list = NULL;
  if (include_optional) {
    agent_apps_list = agent_apps_list_create(
      list_createList(),
      "0"
    );
  } else {
    agent_apps_list = agent_apps_list_create(
      list_createList(),
      "0"
    );
  }

  return agent_apps_list;
}


#ifdef agent_apps_list_MAIN

void test_agent_apps_list(int include_optional) {
    agent_apps_list_t* agent_apps_list_1 = instantiate_agent_apps_list(include_optional);

	cJSON* jsonagent_apps_list_1 = agent_apps_list_convertToJSON(agent_apps_list_1);
	printf("agent_apps_list :\n%s\n", cJSON_Print(jsonagent_apps_list_1));
	agent_apps_list_t* agent_apps_list_2 = agent_apps_list_parseFromJSON(jsonagent_apps_list_1);
	cJSON* jsonagent_apps_list_2 = agent_apps_list_convertToJSON(agent_apps_list_2);
	printf("repeating agent_apps_list:\n%s\n", cJSON_Print(jsonagent_apps_list_2));
}

int main() {
  test_agent_apps_list(1);
  test_agent_apps_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_apps_list_MAIN
#endif // agent_apps_list_TEST
