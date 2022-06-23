#ifndef agent_value_return_TEST
#define agent_value_return_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_value_return_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_value_return.h"
agent_value_return_t* instantiate_agent_value_return(int include_optional);



agent_value_return_t* instantiate_agent_value_return(int include_optional) {
  agent_value_return_t* agent_value_return = NULL;
  if (include_optional) {
    agent_value_return = agent_value_return_create(
      "0"
    );
  } else {
    agent_value_return = agent_value_return_create(
      "0"
    );
  }

  return agent_value_return;
}


#ifdef agent_value_return_MAIN

void test_agent_value_return(int include_optional) {
    agent_value_return_t* agent_value_return_1 = instantiate_agent_value_return(include_optional);

	cJSON* jsonagent_value_return_1 = agent_value_return_convertToJSON(agent_value_return_1);
	printf("agent_value_return :\n%s\n", cJSON_Print(jsonagent_value_return_1));
	agent_value_return_t* agent_value_return_2 = agent_value_return_parseFromJSON(jsonagent_value_return_1);
	cJSON* jsonagent_value_return_2 = agent_value_return_convertToJSON(agent_value_return_2);
	printf("repeating agent_value_return:\n%s\n", cJSON_Print(jsonagent_value_return_2));
}

int main() {
  test_agent_value_return(1);
  test_agent_value_return(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_value_return_MAIN
#endif // agent_value_return_TEST
