#ifndef gpio_state_definition_TEST
#define gpio_state_definition_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gpio_state_definition_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gpio_state_definition.h"
gpio_state_definition_t* instantiate_gpio_state_definition(int include_optional);



gpio_state_definition_t* instantiate_gpio_state_definition(int include_optional) {
  gpio_state_definition_t* gpio_state_definition = NULL;
  if (include_optional) {
    gpio_state_definition = gpio_state_definition_create(
      1.337,
      list_createList()
    );
  } else {
    gpio_state_definition = gpio_state_definition_create(
      1.337,
      list_createList()
    );
  }

  return gpio_state_definition;
}


#ifdef gpio_state_definition_MAIN

void test_gpio_state_definition(int include_optional) {
    gpio_state_definition_t* gpio_state_definition_1 = instantiate_gpio_state_definition(include_optional);

	cJSON* jsongpio_state_definition_1 = gpio_state_definition_convertToJSON(gpio_state_definition_1);
	printf("gpio_state_definition :\n%s\n", cJSON_Print(jsongpio_state_definition_1));
	gpio_state_definition_t* gpio_state_definition_2 = gpio_state_definition_parseFromJSON(jsongpio_state_definition_1);
	cJSON* jsongpio_state_definition_2 = gpio_state_definition_convertToJSON(gpio_state_definition_2);
	printf("repeating gpio_state_definition:\n%s\n", cJSON_Print(jsongpio_state_definition_2));
}

int main() {
  test_gpio_state_definition(1);
  test_gpio_state_definition(0);

  printf("Hello world \n");
  return 0;
}

#endif // gpio_state_definition_MAIN
#endif // gpio_state_definition_TEST
