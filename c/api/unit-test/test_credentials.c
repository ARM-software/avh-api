#ifndef credentials_TEST
#define credentials_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define credentials_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/credentials.h"
credentials_t* instantiate_credentials(int include_optional);



credentials_t* instantiate_credentials(int include_optional) {
  credentials_t* credentials = NULL;
  if (include_optional) {
    credentials = credentials_create(
      "0",
      "0"
    );
  } else {
    credentials = credentials_create(
      "0",
      "0"
    );
  }

  return credentials;
}


#ifdef credentials_MAIN

void test_credentials(int include_optional) {
    credentials_t* credentials_1 = instantiate_credentials(include_optional);

	cJSON* jsoncredentials_1 = credentials_convertToJSON(credentials_1);
	printf("credentials :\n%s\n", cJSON_Print(jsoncredentials_1));
	credentials_t* credentials_2 = credentials_parseFromJSON(jsoncredentials_1);
	cJSON* jsoncredentials_2 = credentials_convertToJSON(credentials_2);
	printf("repeating credentials:\n%s\n", cJSON_Print(jsoncredentials_2));
}

int main() {
  test_credentials(1);
  test_credentials(0);

  printf("Hello world \n");
  return 0;
}

#endif // credentials_MAIN
#endif // credentials_TEST
