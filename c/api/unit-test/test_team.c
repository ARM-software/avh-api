#ifndef team_TEST
#define team_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define team_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/team.h"
team_t* instantiate_team(int include_optional);



team_t* instantiate_team(int include_optional) {
  team_t* team = NULL;
  if (include_optional) {
    team = team_create(
      "0",
      "0",
      list_createList()
    );
  } else {
    team = team_create(
      "0",
      "0",
      list_createList()
    );
  }

  return team;
}


#ifdef team_MAIN

void test_team(int include_optional) {
    team_t* team_1 = instantiate_team(include_optional);

	cJSON* jsonteam_1 = team_convertToJSON(team_1);
	printf("team :\n%s\n", cJSON_Print(jsonteam_1));
	team_t* team_2 = team_parseFromJSON(jsonteam_1);
	cJSON* jsonteam_2 = team_convertToJSON(team_2);
	printf("repeating team:\n%s\n", cJSON_Print(jsonteam_2));
}

int main() {
  test_team(1);
  test_team(0);

  printf("Hello world \n");
  return 0;
}

#endif // team_MAIN
#endif // team_TEST
