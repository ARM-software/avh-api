#ifndef team_create_TEST
#define team_create_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define team_create_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/team_create.h"
team_create_t* instantiate_team_create(int include_optional);



team_create_t* instantiate_team_create(int include_optional) {
  team_create_t* team_create = NULL;
  if (include_optional) {
    team_create = team_create_create(
      "0"
    );
  } else {
    team_create = team_create_create(
      "0"
    );
  }

  return team_create;
}


#ifdef team_create_MAIN

void test_team_create(int include_optional) {
    team_create_t* team_create_1 = instantiate_team_create(include_optional);

	cJSON* jsonteam_create_1 = team_create_convertToJSON(team_create_1);
	printf("team_create :\n%s\n", cJSON_Print(jsonteam_create_1));
	team_create_t* team_create_2 = team_create_parseFromJSON(jsonteam_create_1);
	cJSON* jsonteam_create_2 = team_create_convertToJSON(team_create_2);
	printf("repeating team_create:\n%s\n", cJSON_Print(jsonteam_create_2));
}

int main() {
  test_team_create(1);
  test_team_create(0);

  printf("Hello world \n");
  return 0;
}

#endif // team_create_MAIN
#endif // team_create_TEST
