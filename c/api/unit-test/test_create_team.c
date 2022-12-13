#ifndef create_team_TEST
#define create_team_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_team_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_team.h"
create_team_t* instantiate_create_team(int include_optional);



create_team_t* instantiate_create_team(int include_optional) {
  create_team_t* create_team = NULL;
  if (include_optional) {
    create_team = create_team_create(
      "0"
    );
  } else {
    create_team = create_team_create(
      "0"
    );
  }

  return create_team;
}


#ifdef create_team_MAIN

void test_create_team(int include_optional) {
    create_team_t* create_team_1 = instantiate_create_team(include_optional);

	cJSON* jsoncreate_team_1 = create_team_convertToJSON(create_team_1);
	printf("create_team :\n%s\n", cJSON_Print(jsoncreate_team_1));
	create_team_t* create_team_2 = create_team_parseFromJSON(jsoncreate_team_1);
	cJSON* jsoncreate_team_2 = create_team_convertToJSON(create_team_2);
	printf("repeating create_team:\n%s\n", cJSON_Print(jsoncreate_team_2));
}

int main() {
  test_create_team(1);
  test_create_team(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_team_MAIN
#endif // create_team_TEST
