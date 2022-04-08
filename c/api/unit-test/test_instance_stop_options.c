#ifndef instance_stop_options_TEST
#define instance_stop_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_stop_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_stop_options.h"
instance_stop_options_t* instantiate_instance_stop_options(int include_optional);



instance_stop_options_t* instantiate_instance_stop_options(int include_optional) {
  instance_stop_options_t* instance_stop_options = NULL;
  if (include_optional) {
    instance_stop_options = instance_stop_options_create(
      1
    );
  } else {
    instance_stop_options = instance_stop_options_create(
      1
    );
  }

  return instance_stop_options;
}


#ifdef instance_stop_options_MAIN

void test_instance_stop_options(int include_optional) {
    instance_stop_options_t* instance_stop_options_1 = instantiate_instance_stop_options(include_optional);

	cJSON* jsoninstance_stop_options_1 = instance_stop_options_convertToJSON(instance_stop_options_1);
	printf("instance_stop_options :\n%s\n", cJSON_Print(jsoninstance_stop_options_1));
	instance_stop_options_t* instance_stop_options_2 = instance_stop_options_parseFromJSON(jsoninstance_stop_options_1);
	cJSON* jsoninstance_stop_options_2 = instance_stop_options_convertToJSON(instance_stop_options_2);
	printf("repeating instance_stop_options:\n%s\n", cJSON_Print(jsoninstance_stop_options_2));
}

int main() {
  test_instance_stop_options(1);
  test_instance_stop_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_stop_options_MAIN
#endif // instance_stop_options_TEST
