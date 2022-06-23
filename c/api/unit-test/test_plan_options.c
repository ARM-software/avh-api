#ifndef plan_options_TEST
#define plan_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plan_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plan_options.h"
plan_options_t* instantiate_plan_options(int include_optional);



plan_options_t* instantiate_plan_options(int include_optional) {
  plan_options_t* plan_options = NULL;
  if (include_optional) {
    plan_options = plan_options_create(
      arm_api_plan_options_LICENSETYPE_premium,
      56
    );
  } else {
    plan_options = plan_options_create(
      arm_api_plan_options_LICENSETYPE_premium,
      56
    );
  }

  return plan_options;
}


#ifdef plan_options_MAIN

void test_plan_options(int include_optional) {
    plan_options_t* plan_options_1 = instantiate_plan_options(include_optional);

	cJSON* jsonplan_options_1 = plan_options_convertToJSON(plan_options_1);
	printf("plan_options :\n%s\n", cJSON_Print(jsonplan_options_1));
	plan_options_t* plan_options_2 = plan_options_parseFromJSON(jsonplan_options_1);
	cJSON* jsonplan_options_2 = plan_options_convertToJSON(plan_options_2);
	printf("repeating plan_options:\n%s\n", cJSON_Print(jsonplan_options_2));
}

int main() {
  test_plan_options(1);
  test_plan_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // plan_options_MAIN
#endif // plan_options_TEST
