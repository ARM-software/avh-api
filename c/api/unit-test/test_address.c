#ifndef address_TEST
#define address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address.h"
address_t* instantiate_address(int include_optional);



address_t* instantiate_address(int include_optional) {
  address_t* address = NULL;
  if (include_optional) {
    address = address_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    address = address_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return address;
}


#ifdef address_MAIN

void test_address(int include_optional) {
    address_t* address_1 = instantiate_address(include_optional);

	cJSON* jsonaddress_1 = address_convertToJSON(address_1);
	printf("address :\n%s\n", cJSON_Print(jsonaddress_1));
	address_t* address_2 = address_parseFromJSON(jsonaddress_1);
	cJSON* jsonaddress_2 = address_convertToJSON(address_2);
	printf("repeating address:\n%s\n", cJSON_Print(jsonaddress_2));
}

int main() {
  test_address(1);
  test_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_MAIN
#endif // address_TEST
