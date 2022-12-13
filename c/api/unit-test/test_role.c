#ifndef role_TEST
#define role_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define role_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/role.h"
role_t* instantiate_role(int include_optional);



role_t* instantiate_role(int include_optional) {
  role_t* role = NULL;
  if (include_optional) {
    role = role_create(
      arm_api_role_ROLE_admin,
      "0",
      "0"
    );
  } else {
    role = role_create(
      arm_api_role_ROLE_admin,
      "0",
      "0"
    );
  }

  return role;
}


#ifdef role_MAIN

void test_role(int include_optional) {
    role_t* role_1 = instantiate_role(include_optional);

	cJSON* jsonrole_1 = role_convertToJSON(role_1);
	printf("role :\n%s\n", cJSON_Print(jsonrole_1));
	role_t* role_2 = role_parseFromJSON(jsonrole_1);
	cJSON* jsonrole_2 = role_convertToJSON(role_2);
	printf("repeating role:\n%s\n", cJSON_Print(jsonrole_2));
}

int main() {
  test_role(1);
  test_role(0);

  printf("Hello world \n");
  return 0;
}

#endif // role_MAIN
#endif // role_TEST
