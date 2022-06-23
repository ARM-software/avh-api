#ifndef peripherals_data_TEST
#define peripherals_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define peripherals_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/peripherals_data.h"
peripherals_data_t* instantiate_peripherals_data(int include_optional);



peripherals_data_t* instantiate_peripherals_data(int include_optional) {
  peripherals_data_t* peripherals_data = NULL;
  if (include_optional) {
    peripherals_data = peripherals_data_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1.337,
      1.337,
      1.337,
      1.337,
      1.337
    );
  } else {
    peripherals_data = peripherals_data_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1.337,
      1.337,
      1.337,
      1.337,
      1.337
    );
  }

  return peripherals_data;
}


#ifdef peripherals_data_MAIN

void test_peripherals_data(int include_optional) {
    peripherals_data_t* peripherals_data_1 = instantiate_peripherals_data(include_optional);

	cJSON* jsonperipherals_data_1 = peripherals_data_convertToJSON(peripherals_data_1);
	printf("peripherals_data :\n%s\n", cJSON_Print(jsonperipherals_data_1));
	peripherals_data_t* peripherals_data_2 = peripherals_data_parseFromJSON(jsonperipherals_data_1);
	cJSON* jsonperipherals_data_2 = peripherals_data_convertToJSON(peripherals_data_2);
	printf("repeating peripherals_data:\n%s\n", cJSON_Print(jsonperipherals_data_2));
}

int main() {
  test_peripherals_data(1);
  test_peripherals_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // peripherals_data_MAIN
#endif // peripherals_data_TEST
