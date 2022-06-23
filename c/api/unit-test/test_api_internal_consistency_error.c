#ifndef api_internal_consistency_error_TEST
#define api_internal_consistency_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_internal_consistency_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_internal_consistency_error.h"
api_internal_consistency_error_t* instantiate_api_internal_consistency_error(int include_optional);



api_internal_consistency_error_t* instantiate_api_internal_consistency_error(int include_optional) {
  api_internal_consistency_error_t* api_internal_consistency_error = NULL;
  if (include_optional) {
    api_internal_consistency_error = api_internal_consistency_error_create(
      "0",
      "0",
      "0"
    );
  } else {
    api_internal_consistency_error = api_internal_consistency_error_create(
      "0",
      "0",
      "0"
    );
  }

  return api_internal_consistency_error;
}


#ifdef api_internal_consistency_error_MAIN

void test_api_internal_consistency_error(int include_optional) {
    api_internal_consistency_error_t* api_internal_consistency_error_1 = instantiate_api_internal_consistency_error(include_optional);

	cJSON* jsonapi_internal_consistency_error_1 = api_internal_consistency_error_convertToJSON(api_internal_consistency_error_1);
	printf("api_internal_consistency_error :\n%s\n", cJSON_Print(jsonapi_internal_consistency_error_1));
	api_internal_consistency_error_t* api_internal_consistency_error_2 = api_internal_consistency_error_parseFromJSON(jsonapi_internal_consistency_error_1);
	cJSON* jsonapi_internal_consistency_error_2 = api_internal_consistency_error_convertToJSON(api_internal_consistency_error_2);
	printf("repeating api_internal_consistency_error:\n%s\n", cJSON_Print(jsonapi_internal_consistency_error_2));
}

int main() {
  test_api_internal_consistency_error(1);
  test_api_internal_consistency_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_internal_consistency_error_MAIN
#endif // api_internal_consistency_error_TEST
