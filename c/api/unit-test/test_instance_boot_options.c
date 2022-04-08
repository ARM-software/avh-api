#ifndef instance_boot_options_TEST
#define instance_boot_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_boot_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_boot_options.h"
instance_boot_options_t* instantiate_instance_boot_options(int include_optional);



instance_boot_options_t* instantiate_instance_boot_options(int include_optional) {
  instance_boot_options_t* instance_boot_options = NULL;
  if (include_optional) {
    instance_boot_options = instance_boot_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      list_createList()
    );
  } else {
    instance_boot_options = instance_boot_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      list_createList()
    );
  }

  return instance_boot_options;
}


#ifdef instance_boot_options_MAIN

void test_instance_boot_options(int include_optional) {
    instance_boot_options_t* instance_boot_options_1 = instantiate_instance_boot_options(include_optional);

	cJSON* jsoninstance_boot_options_1 = instance_boot_options_convertToJSON(instance_boot_options_1);
	printf("instance_boot_options :\n%s\n", cJSON_Print(jsoninstance_boot_options_1));
	instance_boot_options_t* instance_boot_options_2 = instance_boot_options_parseFromJSON(jsoninstance_boot_options_1);
	cJSON* jsoninstance_boot_options_2 = instance_boot_options_convertToJSON(instance_boot_options_2);
	printf("repeating instance_boot_options:\n%s\n", cJSON_Print(jsoninstance_boot_options_2));
}

int main() {
  test_instance_boot_options(1);
  test_instance_boot_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_boot_options_MAIN
#endif // instance_boot_options_TEST
