#ifndef touch_input_TEST
#define touch_input_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define touch_input_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/touch_input.h"
touch_input_t* instantiate_touch_input(int include_optional);



touch_input_t* instantiate_touch_input(int include_optional) {
  touch_input_t* touch_input = NULL;
  if (include_optional) {
    touch_input = touch_input_create(
      0
    );
  } else {
    touch_input = touch_input_create(
      0
    );
  }

  return touch_input;
}


#ifdef touch_input_MAIN

void test_touch_input(int include_optional) {
    touch_input_t* touch_input_1 = instantiate_touch_input(include_optional);

	cJSON* jsontouch_input_1 = touch_input_convertToJSON(touch_input_1);
	printf("touch_input :\n%s\n", cJSON_Print(jsontouch_input_1));
	touch_input_t* touch_input_2 = touch_input_parseFromJSON(jsontouch_input_1);
	cJSON* jsontouch_input_2 = touch_input_convertToJSON(touch_input_2);
	printf("repeating touch_input:\n%s\n", cJSON_Print(jsontouch_input_2));
}

int main() {
  test_touch_input(1);
  test_touch_input(0);

  printf("Hello world \n");
  return 0;
}

#endif // touch_input_MAIN
#endif // touch_input_TEST
