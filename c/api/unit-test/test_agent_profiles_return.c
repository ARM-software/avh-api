#ifndef agent_profiles_return_TEST
#define agent_profiles_return_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_profiles_return_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_profiles_return.h"
agent_profiles_return_t* instantiate_agent_profiles_return(int include_optional);



agent_profiles_return_t* instantiate_agent_profiles_return(int include_optional) {
  agent_profiles_return_t* agent_profiles_return = NULL;
  if (include_optional) {
    agent_profiles_return = agent_profiles_return_create(
      list_createList()
    );
  } else {
    agent_profiles_return = agent_profiles_return_create(
      list_createList()
    );
  }

  return agent_profiles_return;
}


#ifdef agent_profiles_return_MAIN

void test_agent_profiles_return(int include_optional) {
    agent_profiles_return_t* agent_profiles_return_1 = instantiate_agent_profiles_return(include_optional);

	cJSON* jsonagent_profiles_return_1 = agent_profiles_return_convertToJSON(agent_profiles_return_1);
	printf("agent_profiles_return :\n%s\n", cJSON_Print(jsonagent_profiles_return_1));
	agent_profiles_return_t* agent_profiles_return_2 = agent_profiles_return_parseFromJSON(jsonagent_profiles_return_1);
	cJSON* jsonagent_profiles_return_2 = agent_profiles_return_convertToJSON(agent_profiles_return_2);
	printf("repeating agent_profiles_return:\n%s\n", cJSON_Print(jsonagent_profiles_return_2));
}

int main() {
  test_agent_profiles_return(1);
  test_agent_profiles_return(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_profiles_return_MAIN
#endif // agent_profiles_return_TEST
