#ifndef project_quota_TEST
#define project_quota_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_quota_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_quota.h"
project_quota_t* instantiate_project_quota(int include_optional);



project_quota_t* instantiate_project_quota(int include_optional) {
  project_quota_t* project_quota = NULL;
  if (include_optional) {
    project_quota = project_quota_create(
      1.337,
      1.337,
      1.337
    );
  } else {
    project_quota = project_quota_create(
      1.337,
      1.337,
      1.337
    );
  }

  return project_quota;
}


#ifdef project_quota_MAIN

void test_project_quota(int include_optional) {
    project_quota_t* project_quota_1 = instantiate_project_quota(include_optional);

	cJSON* jsonproject_quota_1 = project_quota_convertToJSON(project_quota_1);
	printf("project_quota :\n%s\n", cJSON_Print(jsonproject_quota_1));
	project_quota_t* project_quota_2 = project_quota_parseFromJSON(jsonproject_quota_1);
	cJSON* jsonproject_quota_2 = project_quota_convertToJSON(project_quota_2);
	printf("repeating project_quota:\n%s\n", cJSON_Print(jsonproject_quota_2));
}

int main() {
  test_project_quota(1);
  test_project_quota(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_quota_MAIN
#endif // project_quota_TEST
