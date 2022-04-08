#ifndef api_error_TEST
#define api_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_error.h"
api_error_t* instantiate_api_error(int include_optional);



api_error_t* instantiate_api_error(int include_optional) {
  api_error_t* api_error = NULL;
  if (include_optional) {
    api_error = api_error_create(
      "0",
      "0",
      "0"
    );
  } else {
    api_error = api_error_create(
      "0",
      "0",
      "0"
    );
  }

  return api_error;
}


#ifdef api_error_MAIN

void test_api_error(int include_optional) {
    api_error_t* api_error_1 = instantiate_api_error(include_optional);

	cJSON* jsonapi_error_1 = api_error_convertToJSON(api_error_1);
	printf("api_error :\n%s\n", cJSON_Print(jsonapi_error_1));
	api_error_t* api_error_2 = api_error_parseFromJSON(jsonapi_error_1);
	cJSON* jsonapi_error_2 = api_error_convertToJSON(api_error_2);
	printf("repeating api_error:\n%s\n", cJSON_Print(jsonapi_error_2));
}

int main() {
  test_api_error(1);
  test_api_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_error_MAIN
#endif // api_error_TEST
