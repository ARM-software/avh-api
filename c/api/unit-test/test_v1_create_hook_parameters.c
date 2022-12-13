#ifndef v1_create_hook_parameters_TEST
#define v1_create_hook_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_create_hook_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_create_hook_parameters.h"
v1_create_hook_parameters_t* instantiate_v1_create_hook_parameters(int include_optional);



v1_create_hook_parameters_t* instantiate_v1_create_hook_parameters(int include_optional) {
  v1_create_hook_parameters_t* v1_create_hook_parameters = NULL;
  if (include_optional) {
    v1_create_hook_parameters = v1_create_hook_parameters_create(
      "0",
      "0",
      "0",
      arm_api_v1_create_hook_parameters_PATCHTYPE_csmfcc
    );
  } else {
    v1_create_hook_parameters = v1_create_hook_parameters_create(
      "0",
      "0",
      "0",
      arm_api_v1_create_hook_parameters_PATCHTYPE_csmfcc
    );
  }

  return v1_create_hook_parameters;
}


#ifdef v1_create_hook_parameters_MAIN

void test_v1_create_hook_parameters(int include_optional) {
    v1_create_hook_parameters_t* v1_create_hook_parameters_1 = instantiate_v1_create_hook_parameters(include_optional);

	cJSON* jsonv1_create_hook_parameters_1 = v1_create_hook_parameters_convertToJSON(v1_create_hook_parameters_1);
	printf("v1_create_hook_parameters :\n%s\n", cJSON_Print(jsonv1_create_hook_parameters_1));
	v1_create_hook_parameters_t* v1_create_hook_parameters_2 = v1_create_hook_parameters_parseFromJSON(jsonv1_create_hook_parameters_1);
	cJSON* jsonv1_create_hook_parameters_2 = v1_create_hook_parameters_convertToJSON(v1_create_hook_parameters_2);
	printf("repeating v1_create_hook_parameters:\n%s\n", cJSON_Print(jsonv1_create_hook_parameters_2));
}

int main() {
  test_v1_create_hook_parameters(1);
  test_v1_create_hook_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_create_hook_parameters_MAIN
#endif // v1_create_hook_parameters_TEST
