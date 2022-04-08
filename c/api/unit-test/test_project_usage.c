#ifndef project_usage_TEST
#define project_usage_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_usage_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_usage.h"
project_usage_t* instantiate_project_usage(int include_optional);



project_usage_t* instantiate_project_usage(int include_optional) {
  project_usage_t* project_usage = NULL;
  if (include_optional) {
    project_usage = project_usage_create(
      1.337,
      1.337,
      1.337,
      1.337
    );
  } else {
    project_usage = project_usage_create(
      1.337,
      1.337,
      1.337,
      1.337
    );
  }

  return project_usage;
}


#ifdef project_usage_MAIN

void test_project_usage(int include_optional) {
    project_usage_t* project_usage_1 = instantiate_project_usage(include_optional);

	cJSON* jsonproject_usage_1 = project_usage_convertToJSON(project_usage_1);
	printf("project_usage :\n%s\n", cJSON_Print(jsonproject_usage_1));
	project_usage_t* project_usage_2 = project_usage_parseFromJSON(jsonproject_usage_1);
	cJSON* jsonproject_usage_2 = project_usage_convertToJSON(project_usage_2);
	printf("repeating project_usage:\n%s\n", cJSON_Print(jsonproject_usage_2));
}

int main() {
  test_project_usage(1);
  test_project_usage(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_usage_MAIN
#endif // project_usage_TEST
