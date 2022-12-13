#ifndef instance_boot_options_additional_tag_TEST
#define instance_boot_options_additional_tag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_boot_options_additional_tag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_boot_options_additional_tag.h"
instance_boot_options_additional_tag_t* instantiate_instance_boot_options_additional_tag(int include_optional);



instance_boot_options_additional_tag_t* instantiate_instance_boot_options_additional_tag(int include_optional) {
  instance_boot_options_additional_tag_t* instance_boot_options_additional_tag = NULL;
  if (include_optional) {
    instance_boot_options_additional_tag = instance_boot_options_additional_tag_create(
    );
  } else {
    instance_boot_options_additional_tag = instance_boot_options_additional_tag_create(
    );
  }

  return instance_boot_options_additional_tag;
}


#ifdef instance_boot_options_additional_tag_MAIN

void test_instance_boot_options_additional_tag(int include_optional) {
    instance_boot_options_additional_tag_t* instance_boot_options_additional_tag_1 = instantiate_instance_boot_options_additional_tag(include_optional);

	cJSON* jsoninstance_boot_options_additional_tag_1 = instance_boot_options_additional_tag_convertToJSON(instance_boot_options_additional_tag_1);
	printf("instance_boot_options_additional_tag :\n%s\n", cJSON_Print(jsoninstance_boot_options_additional_tag_1));
	instance_boot_options_additional_tag_t* instance_boot_options_additional_tag_2 = instance_boot_options_additional_tag_parseFromJSON(jsoninstance_boot_options_additional_tag_1);
	cJSON* jsoninstance_boot_options_additional_tag_2 = instance_boot_options_additional_tag_convertToJSON(instance_boot_options_additional_tag_2);
	printf("repeating instance_boot_options_additional_tag:\n%s\n", cJSON_Print(jsoninstance_boot_options_additional_tag_2));
}

int main() {
  test_instance_boot_options_additional_tag(1);
  test_instance_boot_options_additional_tag(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_boot_options_additional_tag_MAIN
#endif // instance_boot_options_additional_tag_TEST
