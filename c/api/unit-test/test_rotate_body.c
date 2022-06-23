#ifndef rotate_body_TEST
#define rotate_body_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rotate_body_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rotate_body.h"
rotate_body_t* instantiate_rotate_body(int include_optional);



rotate_body_t* instantiate_rotate_body(int include_optional) {
  rotate_body_t* rotate_body = NULL;
  if (include_optional) {
    rotate_body = rotate_body_create(
      arm_api_rotate_body_ORIENTATION_1
    );
  } else {
    rotate_body = rotate_body_create(
      arm_api_rotate_body_ORIENTATION_1
    );
  }

  return rotate_body;
}


#ifdef rotate_body_MAIN

void test_rotate_body(int include_optional) {
    rotate_body_t* rotate_body_1 = instantiate_rotate_body(include_optional);

	cJSON* jsonrotate_body_1 = rotate_body_convertToJSON(rotate_body_1);
	printf("rotate_body :\n%s\n", cJSON_Print(jsonrotate_body_1));
	rotate_body_t* rotate_body_2 = rotate_body_parseFromJSON(jsonrotate_body_1);
	cJSON* jsonrotate_body_2 = rotate_body_convertToJSON(rotate_body_2);
	printf("repeating rotate_body:\n%s\n", cJSON_Print(jsonrotate_body_2));
}

int main() {
  test_rotate_body(1);
  test_rotate_body(0);

  printf("Hello world \n");
  return 0;
}

#endif // rotate_body_MAIN
#endif // rotate_body_TEST
