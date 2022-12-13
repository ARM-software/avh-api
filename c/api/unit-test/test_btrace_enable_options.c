#ifndef btrace_enable_options_TEST
#define btrace_enable_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define btrace_enable_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/btrace_enable_options.h"
btrace_enable_options_t* instantiate_btrace_enable_options(int include_optional);



btrace_enable_options_t* instantiate_btrace_enable_options(int include_optional) {
  btrace_enable_options_t* btrace_enable_options = NULL;
  if (include_optional) {
    btrace_enable_options = btrace_enable_options_create(
      list_createList()
    );
  } else {
    btrace_enable_options = btrace_enable_options_create(
      list_createList()
    );
  }

  return btrace_enable_options;
}


#ifdef btrace_enable_options_MAIN

void test_btrace_enable_options(int include_optional) {
    btrace_enable_options_t* btrace_enable_options_1 = instantiate_btrace_enable_options(include_optional);

	cJSON* jsonbtrace_enable_options_1 = btrace_enable_options_convertToJSON(btrace_enable_options_1);
	printf("btrace_enable_options :\n%s\n", cJSON_Print(jsonbtrace_enable_options_1));
	btrace_enable_options_t* btrace_enable_options_2 = btrace_enable_options_parseFromJSON(jsonbtrace_enable_options_1);
	cJSON* jsonbtrace_enable_options_2 = btrace_enable_options_convertToJSON(btrace_enable_options_2);
	printf("repeating btrace_enable_options:\n%s\n", cJSON_Print(jsonbtrace_enable_options_2));
}

int main() {
  test_btrace_enable_options(1);
  test_btrace_enable_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // btrace_enable_options_MAIN
#endif // btrace_enable_options_TEST
