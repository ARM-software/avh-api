#ifndef instance_input_TEST
#define instance_input_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_input_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_input.h"
instance_input_t* instantiate_instance_input(int include_optional);



instance_input_t* instantiate_instance_input(int include_optional) {
  instance_input_t* instance_input = NULL;
  if (include_optional) {
    instance_input = instance_input_create(
      0,
      0,
      0,
      "0"
    );
  } else {
    instance_input = instance_input_create(
      0,
      0,
      0,
      "0"
    );
  }

  return instance_input;
}


#ifdef instance_input_MAIN

void test_instance_input(int include_optional) {
    instance_input_t* instance_input_1 = instantiate_instance_input(include_optional);

	cJSON* jsoninstance_input_1 = instance_input_convertToJSON(instance_input_1);
	printf("instance_input :\n%s\n", cJSON_Print(jsoninstance_input_1));
	instance_input_t* instance_input_2 = instance_input_parseFromJSON(jsoninstance_input_1);
	cJSON* jsoninstance_input_2 = instance_input_convertToJSON(instance_input_2);
	printf("repeating instance_input:\n%s\n", cJSON_Print(jsoninstance_input_2));
}

int main() {
  test_instance_input(1);
  test_instance_input(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_input_MAIN
#endif // instance_input_TEST
