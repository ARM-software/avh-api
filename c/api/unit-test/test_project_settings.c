#ifndef project_settings_TEST
#define project_settings_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_settings_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_settings.h"
project_settings_t* instantiate_project_settings(int include_optional);



project_settings_t* instantiate_project_settings(int include_optional) {
  project_settings_t* project_settings = NULL;
  if (include_optional) {
    project_settings = project_settings_create(
      1.337,
      1,
      1
    );
  } else {
    project_settings = project_settings_create(
      1.337,
      1,
      1
    );
  }

  return project_settings;
}


#ifdef project_settings_MAIN

void test_project_settings(int include_optional) {
    project_settings_t* project_settings_1 = instantiate_project_settings(include_optional);

	cJSON* jsonproject_settings_1 = project_settings_convertToJSON(project_settings_1);
	printf("project_settings :\n%s\n", cJSON_Print(jsonproject_settings_1));
	project_settings_t* project_settings_2 = project_settings_parseFromJSON(jsonproject_settings_1);
	cJSON* jsonproject_settings_2 = project_settings_convertToJSON(project_settings_2);
	printf("repeating project_settings:\n%s\n", cJSON_Print(jsonproject_settings_2));
}

int main() {
  test_project_settings(1);
  test_project_settings(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_settings_MAIN
#endif // project_settings_TEST
