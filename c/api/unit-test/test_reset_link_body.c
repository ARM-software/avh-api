#ifndef reset_link_body_TEST
#define reset_link_body_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reset_link_body_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reset_link_body.h"
reset_link_body_t* instantiate_reset_link_body(int include_optional);



reset_link_body_t* instantiate_reset_link_body(int include_optional) {
  reset_link_body_t* reset_link_body = NULL;
  if (include_optional) {
    reset_link_body = reset_link_body_create(
      "0"
    );
  } else {
    reset_link_body = reset_link_body_create(
      "0"
    );
  }

  return reset_link_body;
}


#ifdef reset_link_body_MAIN

void test_reset_link_body(int include_optional) {
    reset_link_body_t* reset_link_body_1 = instantiate_reset_link_body(include_optional);

	cJSON* jsonreset_link_body_1 = reset_link_body_convertToJSON(reset_link_body_1);
	printf("reset_link_body :\n%s\n", cJSON_Print(jsonreset_link_body_1));
	reset_link_body_t* reset_link_body_2 = reset_link_body_parseFromJSON(jsonreset_link_body_1);
	cJSON* jsonreset_link_body_2 = reset_link_body_convertToJSON(reset_link_body_2);
	printf("repeating reset_link_body:\n%s\n", cJSON_Print(jsonreset_link_body_2));
}

int main() {
  test_reset_link_body(1);
  test_reset_link_body(0);

  printf("Hello world \n");
  return 0;
}

#endif // reset_link_body_MAIN
#endif // reset_link_body_TEST
