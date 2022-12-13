#ifndef v1_load_extension_parameters_TEST
#define v1_load_extension_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_load_extension_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_load_extension_parameters.h"
v1_load_extension_parameters_t* instantiate_v1_load_extension_parameters(int include_optional);



v1_load_extension_parameters_t* instantiate_v1_load_extension_parameters(int include_optional) {
  v1_load_extension_parameters_t* v1_load_extension_parameters = NULL;
  if (include_optional) {
    v1_load_extension_parameters = v1_load_extension_parameters_create(
      "0"
    );
  } else {
    v1_load_extension_parameters = v1_load_extension_parameters_create(
      "0"
    );
  }

  return v1_load_extension_parameters;
}


#ifdef v1_load_extension_parameters_MAIN

void test_v1_load_extension_parameters(int include_optional) {
    v1_load_extension_parameters_t* v1_load_extension_parameters_1 = instantiate_v1_load_extension_parameters(include_optional);

	cJSON* jsonv1_load_extension_parameters_1 = v1_load_extension_parameters_convertToJSON(v1_load_extension_parameters_1);
	printf("v1_load_extension_parameters :\n%s\n", cJSON_Print(jsonv1_load_extension_parameters_1));
	v1_load_extension_parameters_t* v1_load_extension_parameters_2 = v1_load_extension_parameters_parseFromJSON(jsonv1_load_extension_parameters_1);
	cJSON* jsonv1_load_extension_parameters_2 = v1_load_extension_parameters_convertToJSON(v1_load_extension_parameters_2);
	printf("repeating v1_load_extension_parameters:\n%s\n", cJSON_Print(jsonv1_load_extension_parameters_2));
}

int main() {
  test_v1_load_extension_parameters(1);
  test_v1_load_extension_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_load_extension_parameters_MAIN
#endif // v1_load_extension_parameters_TEST
