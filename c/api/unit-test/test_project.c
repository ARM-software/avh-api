#ifndef project_TEST
#define project_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project.h"
project_t* instantiate_project(int include_optional);

#include "test_project_settings.c"
#include "test_project_quota.c"
#include "test_project_usage.c"


project_t* instantiate_project(int include_optional) {
  project_t* project = NULL;
  if (include_optional) {
    project = project_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_project_settings(0),
       // false, not to have infinite recursion
      instantiate_project_quota(0),
       // false, not to have infinite recursion
      instantiate_project_usage(0)
    );
  } else {
    project = project_create(
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return project;
}


#ifdef project_MAIN

void test_project(int include_optional) {
    project_t* project_1 = instantiate_project(include_optional);

	cJSON* jsonproject_1 = project_convertToJSON(project_1);
	printf("project :\n%s\n", cJSON_Print(jsonproject_1));
	project_t* project_2 = project_parseFromJSON(jsonproject_1);
	cJSON* jsonproject_2 = project_convertToJSON(project_2);
	printf("repeating project:\n%s\n", cJSON_Print(jsonproject_2));
}

int main() {
  test_project(1);
  test_project(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_MAIN
#endif // project_TEST
