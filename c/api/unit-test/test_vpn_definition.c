#ifndef vpn_definition_TEST
#define vpn_definition_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vpn_definition_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vpn_definition.h"
vpn_definition_t* instantiate_vpn_definition(int include_optional);



vpn_definition_t* instantiate_vpn_definition(int include_optional) {
  vpn_definition_t* vpn_definition = NULL;
  if (include_optional) {
    vpn_definition = vpn_definition_create(
      list_createList(),
      list_createList()
    );
  } else {
    vpn_definition = vpn_definition_create(
      list_createList(),
      list_createList()
    );
  }

  return vpn_definition;
}


#ifdef vpn_definition_MAIN

void test_vpn_definition(int include_optional) {
    vpn_definition_t* vpn_definition_1 = instantiate_vpn_definition(include_optional);

	cJSON* jsonvpn_definition_1 = vpn_definition_convertToJSON(vpn_definition_1);
	printf("vpn_definition :\n%s\n", cJSON_Print(jsonvpn_definition_1));
	vpn_definition_t* vpn_definition_2 = vpn_definition_parseFromJSON(jsonvpn_definition_1);
	cJSON* jsonvpn_definition_2 = vpn_definition_convertToJSON(vpn_definition_2);
	printf("repeating vpn_definition:\n%s\n", cJSON_Print(jsonvpn_definition_2));
}

int main() {
  test_vpn_definition(1);
  test_vpn_definition(0);

  printf("Hello world \n");
  return 0;
}

#endif // vpn_definition_MAIN
#endif // vpn_definition_TEST
