#ifndef api_conflict_error_TEST
#define api_conflict_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_conflict_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_conflict_error.h"
api_conflict_error_t* instantiate_api_conflict_error(int include_optional);



api_conflict_error_t* instantiate_api_conflict_error(int include_optional) {
  api_conflict_error_t* api_conflict_error = NULL;
  if (include_optional) {
    api_conflict_error = api_conflict_error_create(
      "0",
      arm_api_api_conflict_error_ERRORID_Conflict,
      0
    );
  } else {
    api_conflict_error = api_conflict_error_create(
      "0",
      arm_api_api_conflict_error_ERRORID_Conflict,
      0
    );
  }

  return api_conflict_error;
}


#ifdef api_conflict_error_MAIN

void test_api_conflict_error(int include_optional) {
    api_conflict_error_t* api_conflict_error_1 = instantiate_api_conflict_error(include_optional);

	cJSON* jsonapi_conflict_error_1 = api_conflict_error_convertToJSON(api_conflict_error_1);
	printf("api_conflict_error :\n%s\n", cJSON_Print(jsonapi_conflict_error_1));
	api_conflict_error_t* api_conflict_error_2 = api_conflict_error_parseFromJSON(jsonapi_conflict_error_1);
	cJSON* jsonapi_conflict_error_2 = api_conflict_error_convertToJSON(api_conflict_error_2);
	printf("repeating api_conflict_error:\n%s\n", cJSON_Print(jsonapi_conflict_error_2));
}

int main() {
  test_api_conflict_error(1);
  test_api_conflict_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_conflict_error_MAIN
#endif // api_conflict_error_TEST
