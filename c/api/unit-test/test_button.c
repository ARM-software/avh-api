#ifndef button_TEST
#define button_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define button_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/button.h"
button_t* instantiate_button(int include_optional);



button_t* instantiate_button(int include_optional) {
  button_t* button = NULL;
  if (include_optional) {
    button = button_create(
    );
  } else {
    button = button_create(
    );
  }

  return button;
}


#ifdef button_MAIN

void test_button(int include_optional) {
    button_t* button_1 = instantiate_button(include_optional);

	cJSON* jsonbutton_1 = button_convertToJSON(button_1);
	printf("button :\n%s\n", cJSON_Print(jsonbutton_1));
	button_t* button_2 = button_parseFromJSON(jsonbutton_1);
	cJSON* jsonbutton_2 = button_convertToJSON(button_2);
	printf("repeating button:\n%s\n", cJSON_Print(jsonbutton_2));
}

int main() {
  test_button(1);
  test_button(0);

  printf("Hello world \n");
  return 0;
}

#endif // button_MAIN
#endif // button_TEST
