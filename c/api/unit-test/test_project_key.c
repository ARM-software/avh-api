#ifndef project_key_TEST
#define project_key_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_key_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_key.h"
project_key_t* instantiate_project_key(int include_optional);



project_key_t* instantiate_project_key(int include_optional) {
  project_key_t* project_key = NULL;
  if (include_optional) {
    project_key = project_key_create(
      "0",
      arm_api_project_key_KIND_ssh,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    project_key = project_key_create(
      "0",
      arm_api_project_key_KIND_ssh,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return project_key;
}


#ifdef project_key_MAIN

void test_project_key(int include_optional) {
    project_key_t* project_key_1 = instantiate_project_key(include_optional);

	cJSON* jsonproject_key_1 = project_key_convertToJSON(project_key_1);
	printf("project_key :\n%s\n", cJSON_Print(jsonproject_key_1));
	project_key_t* project_key_2 = project_key_parseFromJSON(jsonproject_key_1);
	cJSON* jsonproject_key_2 = project_key_convertToJSON(project_key_2);
	printf("repeating project_key:\n%s\n", cJSON_Print(jsonproject_key_2));
}

int main() {
  test_project_key(1);
  test_project_key(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_key_MAIN
#endif // project_key_TEST
