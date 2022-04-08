#ifndef token_TEST
#define token_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define token_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/token.h"
token_t* instantiate_token(int include_optional);



token_t* instantiate_token(int include_optional) {
  token_t* token = NULL;
  if (include_optional) {
    token = token_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    token = token_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return token;
}


#ifdef token_MAIN

void test_token(int include_optional) {
    token_t* token_1 = instantiate_token(include_optional);

	cJSON* jsontoken_1 = token_convertToJSON(token_1);
	printf("token :\n%s\n", cJSON_Print(jsontoken_1));
	token_t* token_2 = token_parseFromJSON(jsontoken_1);
	cJSON* jsontoken_2 = token_convertToJSON(token_2);
	printf("repeating token:\n%s\n", cJSON_Print(jsontoken_2));
}

int main() {
  test_token(1);
  test_token(0);

  printf("Hello world \n");
  return 0;
}

#endif // token_MAIN
#endif // token_TEST
