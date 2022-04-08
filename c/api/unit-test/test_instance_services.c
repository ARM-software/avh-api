#ifndef instance_services_TEST
#define instance_services_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_services_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_services.h"
instance_services_t* instantiate_instance_services(int include_optional);

#include "test_vpn_definition.c"


instance_services_t* instantiate_instance_services(int include_optional) {
  instance_services_t* instance_services = NULL;
  if (include_optional) {
    instance_services = instance_services_create(
       // false, not to have infinite recursion
      instantiate_vpn_definition(0)
    );
  } else {
    instance_services = instance_services_create(
      NULL
    );
  }

  return instance_services;
}


#ifdef instance_services_MAIN

void test_instance_services(int include_optional) {
    instance_services_t* instance_services_1 = instantiate_instance_services(include_optional);

	cJSON* jsoninstance_services_1 = instance_services_convertToJSON(instance_services_1);
	printf("instance_services :\n%s\n", cJSON_Print(jsoninstance_services_1));
	instance_services_t* instance_services_2 = instance_services_parseFromJSON(jsoninstance_services_1);
	cJSON* jsoninstance_services_2 = instance_services_convertToJSON(instance_services_2);
	printf("repeating instance_services:\n%s\n", cJSON_Print(jsoninstance_services_2));
}

int main() {
  test_instance_services(1);
  test_instance_services(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_services_MAIN
#endif // instance_services_TEST
