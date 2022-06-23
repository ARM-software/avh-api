#ifndef text_input_TEST
#define text_input_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define text_input_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/text_input.h"
text_input_t* instantiate_text_input(int include_optional);



text_input_t* instantiate_text_input(int include_optional) {
  text_input_t* text_input = NULL;
  if (include_optional) {
    text_input = text_input_create(
      "0"
    );
  } else {
    text_input = text_input_create(
      "0"
    );
  }

  return text_input;
}


#ifdef text_input_MAIN

void test_text_input(int include_optional) {
    text_input_t* text_input_1 = instantiate_text_input(include_optional);

	cJSON* jsontext_input_1 = text_input_convertToJSON(text_input_1);
	printf("text_input :\n%s\n", cJSON_Print(jsontext_input_1));
	text_input_t* text_input_2 = text_input_parseFromJSON(jsontext_input_1);
	cJSON* jsontext_input_2 = text_input_convertToJSON(text_input_2);
	printf("repeating text_input:\n%s\n", cJSON_Print(jsontext_input_2));
}

int main() {
  test_text_input(1);
  test_text_input(0);

  printf("Hello world \n");
  return 0;
}

#endif // text_input_MAIN
#endif // text_input_TEST
