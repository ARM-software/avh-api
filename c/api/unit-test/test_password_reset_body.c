#ifndef password_reset_body_TEST
#define password_reset_body_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define password_reset_body_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/password_reset_body.h"
password_reset_body_t* instantiate_password_reset_body(int include_optional);



password_reset_body_t* instantiate_password_reset_body(int include_optional) {
  password_reset_body_t* password_reset_body = NULL;
  if (include_optional) {
    password_reset_body = password_reset_body_create(
      "0",
      "0",
      "0"
    );
  } else {
    password_reset_body = password_reset_body_create(
      "0",
      "0",
      "0"
    );
  }

  return password_reset_body;
}


#ifdef password_reset_body_MAIN

void test_password_reset_body(int include_optional) {
    password_reset_body_t* password_reset_body_1 = instantiate_password_reset_body(include_optional);

	cJSON* jsonpassword_reset_body_1 = password_reset_body_convertToJSON(password_reset_body_1);
	printf("password_reset_body :\n%s\n", cJSON_Print(jsonpassword_reset_body_1));
	password_reset_body_t* password_reset_body_2 = password_reset_body_parseFromJSON(jsonpassword_reset_body_1);
	cJSON* jsonpassword_reset_body_2 = password_reset_body_convertToJSON(password_reset_body_2);
	printf("repeating password_reset_body:\n%s\n", cJSON_Print(jsonpassword_reset_body_2));
}

int main() {
  test_password_reset_body(1);
  test_password_reset_body(0);

  printf("Hello world \n");
  return 0;
}

#endif // password_reset_body_MAIN
#endif // password_reset_body_TEST
