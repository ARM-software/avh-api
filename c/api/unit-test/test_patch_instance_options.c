#ifndef patch_instance_options_TEST
#define patch_instance_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define patch_instance_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/patch_instance_options.h"
patch_instance_options_t* instantiate_patch_instance_options(int include_optional);



patch_instance_options_t* instantiate_patch_instance_options(int include_optional) {
  patch_instance_options_t* patch_instance_options = NULL;
  if (include_optional) {
    patch_instance_options = patch_instance_options_create(
      "0",
      arm_api_patch_instance_options_STATE_on,
      "0",
      "0"
    );
  } else {
    patch_instance_options = patch_instance_options_create(
      "0",
      arm_api_patch_instance_options_STATE_on,
      "0",
      "0"
    );
  }

  return patch_instance_options;
}


#ifdef patch_instance_options_MAIN

void test_patch_instance_options(int include_optional) {
    patch_instance_options_t* patch_instance_options_1 = instantiate_patch_instance_options(include_optional);

	cJSON* jsonpatch_instance_options_1 = patch_instance_options_convertToJSON(patch_instance_options_1);
	printf("patch_instance_options :\n%s\n", cJSON_Print(jsonpatch_instance_options_1));
	patch_instance_options_t* patch_instance_options_2 = patch_instance_options_parseFromJSON(jsonpatch_instance_options_1);
	cJSON* jsonpatch_instance_options_2 = patch_instance_options_convertToJSON(patch_instance_options_2);
	printf("repeating patch_instance_options:\n%s\n", cJSON_Print(jsonpatch_instance_options_2));
}

int main() {
  test_patch_instance_options(1);
  test_patch_instance_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // patch_instance_options_MAIN
#endif // patch_instance_options_TEST
