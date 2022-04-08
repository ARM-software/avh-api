#ifndef api_not_found_error_TEST
#define api_not_found_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_not_found_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_not_found_error.h"
api_not_found_error_t* instantiate_api_not_found_error(int include_optional);



api_not_found_error_t* instantiate_api_not_found_error(int include_optional) {
  api_not_found_error_t* api_not_found_error = NULL;
  if (include_optional) {
    api_not_found_error = api_not_found_error_create(
      "0",
      "0",
      "0",
      0
    );
  } else {
    api_not_found_error = api_not_found_error_create(
      "0",
      "0",
      "0",
      0
    );
  }

  return api_not_found_error;
}


#ifdef api_not_found_error_MAIN

void test_api_not_found_error(int include_optional) {
    api_not_found_error_t* api_not_found_error_1 = instantiate_api_not_found_error(include_optional);

	cJSON* jsonapi_not_found_error_1 = api_not_found_error_convertToJSON(api_not_found_error_1);
	printf("api_not_found_error :\n%s\n", cJSON_Print(jsonapi_not_found_error_1));
	api_not_found_error_t* api_not_found_error_2 = api_not_found_error_parseFromJSON(jsonapi_not_found_error_1);
	cJSON* jsonapi_not_found_error_2 = api_not_found_error_convertToJSON(api_not_found_error_2);
	printf("repeating api_not_found_error:\n%s\n", cJSON_Print(jsonapi_not_found_error_2));
}

int main() {
  test_api_not_found_error(1);
  test_api_not_found_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_not_found_error_MAIN
#endif // api_not_found_error_TEST
