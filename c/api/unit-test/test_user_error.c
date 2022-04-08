#ifndef user_error_TEST
#define user_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_error.h"
user_error_t* instantiate_user_error(int include_optional);



user_error_t* instantiate_user_error(int include_optional) {
  user_error_t* user_error = NULL;
  if (include_optional) {
    user_error = user_error_create(
      "0",
      arm_api_user_error_ERRORID_UserError,
      "0"
    );
  } else {
    user_error = user_error_create(
      "0",
      arm_api_user_error_ERRORID_UserError,
      "0"
    );
  }

  return user_error;
}


#ifdef user_error_MAIN

void test_user_error(int include_optional) {
    user_error_t* user_error_1 = instantiate_user_error(include_optional);

	cJSON* jsonuser_error_1 = user_error_convertToJSON(user_error_1);
	printf("user_error :\n%s\n", cJSON_Print(jsonuser_error_1));
	user_error_t* user_error_2 = user_error_parseFromJSON(jsonuser_error_1);
	cJSON* jsonuser_error_2 = user_error_convertToJSON(user_error_2);
	printf("repeating user_error:\n%s\n", cJSON_Print(jsonuser_error_2));
}

int main() {
  test_user_error(1);
  test_user_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_error_MAIN
#endif // user_error_TEST
