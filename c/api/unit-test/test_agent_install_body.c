#ifndef agent_install_body_TEST
#define agent_install_body_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_install_body_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_install_body.h"
agent_install_body_t* instantiate_agent_install_body(int include_optional);



agent_install_body_t* instantiate_agent_install_body(int include_optional) {
  agent_install_body_t* agent_install_body = NULL;
  if (include_optional) {
    agent_install_body = agent_install_body_create(
      "0"
    );
  } else {
    agent_install_body = agent_install_body_create(
      "0"
    );
  }

  return agent_install_body;
}


#ifdef agent_install_body_MAIN

void test_agent_install_body(int include_optional) {
    agent_install_body_t* agent_install_body_1 = instantiate_agent_install_body(include_optional);

	cJSON* jsonagent_install_body_1 = agent_install_body_convertToJSON(agent_install_body_1);
	printf("agent_install_body :\n%s\n", cJSON_Print(jsonagent_install_body_1));
	agent_install_body_t* agent_install_body_2 = agent_install_body_parseFromJSON(jsonagent_install_body_1);
	cJSON* jsonagent_install_body_2 = agent_install_body_convertToJSON(agent_install_body_2);
	printf("repeating agent_install_body:\n%s\n", cJSON_Print(jsonagent_install_body_2));
}

int main() {
  test_agent_install_body(1);
  test_agent_install_body(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_install_body_MAIN
#endif // agent_install_body_TEST
