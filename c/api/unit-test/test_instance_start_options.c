#ifndef instance_start_options_TEST
#define instance_start_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_start_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_start_options.h"
instance_start_options_t* instantiate_instance_start_options(int include_optional);



instance_start_options_t* instantiate_instance_start_options(int include_optional) {
  instance_start_options_t* instance_start_options = NULL;
  if (include_optional) {
    instance_start_options = instance_start_options_create(
      1
    );
  } else {
    instance_start_options = instance_start_options_create(
      1
    );
  }

  return instance_start_options;
}


#ifdef instance_start_options_MAIN

void test_instance_start_options(int include_optional) {
    instance_start_options_t* instance_start_options_1 = instantiate_instance_start_options(include_optional);

	cJSON* jsoninstance_start_options_1 = instance_start_options_convertToJSON(instance_start_options_1);
	printf("instance_start_options :\n%s\n", cJSON_Print(jsoninstance_start_options_1));
	instance_start_options_t* instance_start_options_2 = instance_start_options_parseFromJSON(jsoninstance_start_options_1);
	cJSON* jsoninstance_start_options_2 = instance_start_options_convertToJSON(instance_start_options_2);
	printf("repeating instance_start_options:\n%s\n", cJSON_Print(jsoninstance_start_options_2));
}

int main() {
  test_instance_start_options(1);
  test_instance_start_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_start_options_MAIN
#endif // instance_start_options_TEST
