#ifndef agent_system_adb_auth_TEST
#define agent_system_adb_auth_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_system_adb_auth_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_system_adb_auth.h"
agent_system_adb_auth_t* instantiate_agent_system_adb_auth(int include_optional);



agent_system_adb_auth_t* instantiate_agent_system_adb_auth(int include_optional) {
  agent_system_adb_auth_t* agent_system_adb_auth = NULL;
  if (include_optional) {
    agent_system_adb_auth = agent_system_adb_auth_create(
      1
    );
  } else {
    agent_system_adb_auth = agent_system_adb_auth_create(
      1
    );
  }

  return agent_system_adb_auth;
}


#ifdef agent_system_adb_auth_MAIN

void test_agent_system_adb_auth(int include_optional) {
    agent_system_adb_auth_t* agent_system_adb_auth_1 = instantiate_agent_system_adb_auth(include_optional);

	cJSON* jsonagent_system_adb_auth_1 = agent_system_adb_auth_convertToJSON(agent_system_adb_auth_1);
	printf("agent_system_adb_auth :\n%s\n", cJSON_Print(jsonagent_system_adb_auth_1));
	agent_system_adb_auth_t* agent_system_adb_auth_2 = agent_system_adb_auth_parseFromJSON(jsonagent_system_adb_auth_1);
	cJSON* jsonagent_system_adb_auth_2 = agent_system_adb_auth_convertToJSON(agent_system_adb_auth_2);
	printf("repeating agent_system_adb_auth:\n%s\n", cJSON_Print(jsonagent_system_adb_auth_2));
}

int main() {
  test_agent_system_adb_auth(1);
  test_agent_system_adb_auth(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_system_adb_auth_MAIN
#endif // agent_system_adb_auth_TEST
