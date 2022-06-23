#ifndef gpios_state_TEST
#define gpios_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gpios_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gpios_state.h"
gpios_state_t* instantiate_gpios_state(int include_optional);

#include "test_gpio_state_definition.c"
#include "test_gpio_state_definition.c"
#include "test_gpio_state_definition.c"


gpios_state_t* instantiate_gpios_state(int include_optional) {
  gpios_state_t* gpios_state = NULL;
  if (include_optional) {
    gpios_state = gpios_state_create(
       // false, not to have infinite recursion
      instantiate_gpio_state_definition(0),
       // false, not to have infinite recursion
      instantiate_gpio_state_definition(0),
       // false, not to have infinite recursion
      instantiate_gpio_state_definition(0)
    );
  } else {
    gpios_state = gpios_state_create(
      NULL,
      NULL,
      NULL
    );
  }

  return gpios_state;
}


#ifdef gpios_state_MAIN

void test_gpios_state(int include_optional) {
    gpios_state_t* gpios_state_1 = instantiate_gpios_state(include_optional);

	cJSON* jsongpios_state_1 = gpios_state_convertToJSON(gpios_state_1);
	printf("gpios_state :\n%s\n", cJSON_Print(jsongpios_state_1));
	gpios_state_t* gpios_state_2 = gpios_state_parseFromJSON(jsongpios_state_1);
	cJSON* jsongpios_state_2 = gpios_state_convertToJSON(gpios_state_2);
	printf("repeating gpios_state:\n%s\n", cJSON_Print(jsongpios_state_2));
}

int main() {
  test_gpios_state(1);
  test_gpios_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // gpios_state_MAIN
#endif // gpios_state_TEST
