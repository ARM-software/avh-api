#ifndef password_change_body_TEST
#define password_change_body_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define password_change_body_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/password_change_body.h"
password_change_body_t* instantiate_password_change_body(int include_optional);



password_change_body_t* instantiate_password_change_body(int include_optional) {
  password_change_body_t* password_change_body = NULL;
  if (include_optional) {
    password_change_body = password_change_body_create(
      "0",
      "0",
      "0"
    );
  } else {
    password_change_body = password_change_body_create(
      "0",
      "0",
      "0"
    );
  }

  return password_change_body;
}


#ifdef password_change_body_MAIN

void test_password_change_body(int include_optional) {
    password_change_body_t* password_change_body_1 = instantiate_password_change_body(include_optional);

	cJSON* jsonpassword_change_body_1 = password_change_body_convertToJSON(password_change_body_1);
	printf("password_change_body :\n%s\n", cJSON_Print(jsonpassword_change_body_1));
	password_change_body_t* password_change_body_2 = password_change_body_parseFromJSON(jsonpassword_change_body_1);
	cJSON* jsonpassword_change_body_2 = password_change_body_convertToJSON(password_change_body_2);
	printf("repeating password_change_body:\n%s\n", cJSON_Print(jsonpassword_change_body_2));
}

int main() {
  test_password_change_body(1);
  test_password_change_body(0);

  printf("Hello world \n");
  return 0;
}

#endif // password_change_body_MAIN
#endif // password_change_body_TEST
