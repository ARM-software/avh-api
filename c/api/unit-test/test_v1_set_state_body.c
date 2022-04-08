#ifndef v1_set_state_body_TEST
#define v1_set_state_body_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_set_state_body_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_set_state_body.h"
v1_set_state_body_t* instantiate_v1_set_state_body(int include_optional);



v1_set_state_body_t* instantiate_v1_set_state_body(int include_optional) {
  v1_set_state_body_t* v1_set_state_body = NULL;
  if (include_optional) {
    v1_set_state_body = v1_set_state_body_create(
      arm_api_v1_set_state_body__on
    );
  } else {
    v1_set_state_body = v1_set_state_body_create(
      arm_api_v1_set_state_body__on
    );
  }

  return v1_set_state_body;
}


#ifdef v1_set_state_body_MAIN

void test_v1_set_state_body(int include_optional) {
    v1_set_state_body_t* v1_set_state_body_1 = instantiate_v1_set_state_body(include_optional);

	cJSON* jsonv1_set_state_body_1 = v1_set_state_body_convertToJSON(v1_set_state_body_1);
	printf("v1_set_state_body :\n%s\n", cJSON_Print(jsonv1_set_state_body_1));
	v1_set_state_body_t* v1_set_state_body_2 = v1_set_state_body_parseFromJSON(jsonv1_set_state_body_1);
	cJSON* jsonv1_set_state_body_2 = v1_set_state_body_convertToJSON(v1_set_state_body_2);
	printf("repeating v1_set_state_body:\n%s\n", cJSON_Print(jsonv1_set_state_body_2));
}

int main() {
  test_v1_set_state_body(1);
  test_v1_set_state_body(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_set_state_body_MAIN
#endif // v1_set_state_body_TEST
