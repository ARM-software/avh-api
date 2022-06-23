#ifndef touch_curve_input_TEST
#define touch_curve_input_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define touch_curve_input_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/touch_curve_input.h"
touch_curve_input_t* instantiate_touch_curve_input(int include_optional);



touch_curve_input_t* instantiate_touch_curve_input(int include_optional) {
  touch_curve_input_t* touch_curve_input = NULL;
  if (include_optional) {
    touch_curve_input = touch_curve_input_create(
      0,
      0
    );
  } else {
    touch_curve_input = touch_curve_input_create(
      0,
      0
    );
  }

  return touch_curve_input;
}


#ifdef touch_curve_input_MAIN

void test_touch_curve_input(int include_optional) {
    touch_curve_input_t* touch_curve_input_1 = instantiate_touch_curve_input(include_optional);

	cJSON* jsontouch_curve_input_1 = touch_curve_input_convertToJSON(touch_curve_input_1);
	printf("touch_curve_input :\n%s\n", cJSON_Print(jsontouch_curve_input_1));
	touch_curve_input_t* touch_curve_input_2 = touch_curve_input_parseFromJSON(jsontouch_curve_input_1);
	cJSON* jsontouch_curve_input_2 = touch_curve_input_convertToJSON(touch_curve_input_2);
	printf("repeating touch_curve_input:\n%s\n", cJSON_Print(jsontouch_curve_input_2));
}

int main() {
  test_touch_curve_input(1);
  test_touch_curve_input(0);

  printf("Hello world \n");
  return 0;
}

#endif // touch_curve_input_MAIN
#endif // touch_curve_input_TEST
