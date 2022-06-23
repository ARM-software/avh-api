#ifndef agent_icons_TEST
#define agent_icons_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agent_icons_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agent_icons.h"
agent_icons_t* instantiate_agent_icons(int include_optional);



agent_icons_t* instantiate_agent_icons(int include_optional) {
  agent_icons_t* agent_icons = NULL;
  if (include_optional) {
    agent_icons = agent_icons_create(
      "YQ=="
    );
  } else {
    agent_icons = agent_icons_create(
      "YQ=="
    );
  }

  return agent_icons;
}


#ifdef agent_icons_MAIN

void test_agent_icons(int include_optional) {
    agent_icons_t* agent_icons_1 = instantiate_agent_icons(include_optional);

	cJSON* jsonagent_icons_1 = agent_icons_convertToJSON(agent_icons_1);
	printf("agent_icons :\n%s\n", cJSON_Print(jsonagent_icons_1));
	agent_icons_t* agent_icons_2 = agent_icons_parseFromJSON(jsonagent_icons_1);
	cJSON* jsonagent_icons_2 = agent_icons_convertToJSON(agent_icons_2);
	printf("repeating agent_icons:\n%s\n", cJSON_Print(jsonagent_icons_2));
}

int main() {
  test_agent_icons(1);
  test_agent_icons(0);

  printf("Hello world \n");
  return 0;
}

#endif // agent_icons_MAIN
#endif // agent_icons_TEST
