#ifndef hook_TEST
#define hook_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hook_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hook.h"
hook_t* instantiate_hook(int include_optional);



hook_t* instantiate_hook(int include_optional) {
  hook_t* hook = NULL;
  if (include_optional) {
    hook = hook_create(
      "0",
      "0",
      "0",
      "0",
      arm_api_hook_PATCHTYPE_csmfcc,
      1,
      "0",
      "0",
      "0"
    );
  } else {
    hook = hook_create(
      "0",
      "0",
      "0",
      "0",
      arm_api_hook_PATCHTYPE_csmfcc,
      1,
      "0",
      "0",
      "0"
    );
  }

  return hook;
}


#ifdef hook_MAIN

void test_hook(int include_optional) {
    hook_t* hook_1 = instantiate_hook(include_optional);

	cJSON* jsonhook_1 = hook_convertToJSON(hook_1);
	printf("hook :\n%s\n", cJSON_Print(jsonhook_1));
	hook_t* hook_2 = hook_parseFromJSON(jsonhook_1);
	cJSON* jsonhook_2 = hook_convertToJSON(hook_2);
	printf("repeating hook:\n%s\n", cJSON_Print(jsonhook_2));
}

int main() {
  test_hook(1);
  test_hook(0);

  printf("Hello world \n");
  return 0;
}

#endif // hook_MAIN
#endif // hook_TEST
