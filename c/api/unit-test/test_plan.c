#ifndef plan_TEST
#define plan_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plan_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plan.h"
plan_t* instantiate_plan(int include_optional);



plan_t* instantiate_plan(int include_optional) {
  plan_t* plan = NULL;
  if (include_optional) {
    plan = plan_create(
      arm_api_plan_LICENSETYPE_premium,
      56
    );
  } else {
    plan = plan_create(
      arm_api_plan_LICENSETYPE_premium,
      56
    );
  }

  return plan;
}


#ifdef plan_MAIN

void test_plan(int include_optional) {
    plan_t* plan_1 = instantiate_plan(include_optional);

	cJSON* jsonplan_1 = plan_convertToJSON(plan_1);
	printf("plan :\n%s\n", cJSON_Print(jsonplan_1));
	plan_t* plan_2 = plan_parseFromJSON(jsonplan_1);
	cJSON* jsonplan_2 = plan_convertToJSON(plan_2);
	printf("repeating plan:\n%s\n", cJSON_Print(jsonplan_2));
}

int main() {
  test_plan(1);
  test_plan(0);

  printf("Hello world \n");
  return 0;
}

#endif // plan_MAIN
#endif // plan_TEST
