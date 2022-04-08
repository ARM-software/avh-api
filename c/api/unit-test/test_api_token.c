#ifndef api_token_TEST
#define api_token_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_token_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_token.h"
api_token_t* instantiate_api_token(int include_optional);



api_token_t* instantiate_api_token(int include_optional) {
  api_token_t* api_token = NULL;
  if (include_optional) {
    api_token = api_token_create(
      "0"
    );
  } else {
    api_token = api_token_create(
      "0"
    );
  }

  return api_token;
}


#ifdef api_token_MAIN

void test_api_token(int include_optional) {
    api_token_t* api_token_1 = instantiate_api_token(include_optional);

	cJSON* jsonapi_token_1 = api_token_convertToJSON(api_token_1);
	printf("api_token :\n%s\n", cJSON_Print(jsonapi_token_1));
	api_token_t* api_token_2 = api_token_parseFromJSON(jsonapi_token_1);
	cJSON* jsonapi_token_2 = api_token_convertToJSON(api_token_2);
	printf("repeating api_token:\n%s\n", cJSON_Print(jsonapi_token_2));
}

int main() {
  test_api_token(1);
  test_api_token(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_token_MAIN
#endif // api_token_TEST
