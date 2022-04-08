#ifndef instance_console_endpoint_TEST
#define instance_console_endpoint_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_console_endpoint_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_console_endpoint.h"
instance_console_endpoint_t* instantiate_instance_console_endpoint(int include_optional);



instance_console_endpoint_t* instantiate_instance_console_endpoint(int include_optional) {
  instance_console_endpoint_t* instance_console_endpoint = NULL;
  if (include_optional) {
    instance_console_endpoint = instance_console_endpoint_create(
      "0"
    );
  } else {
    instance_console_endpoint = instance_console_endpoint_create(
      "0"
    );
  }

  return instance_console_endpoint;
}


#ifdef instance_console_endpoint_MAIN

void test_instance_console_endpoint(int include_optional) {
    instance_console_endpoint_t* instance_console_endpoint_1 = instantiate_instance_console_endpoint(include_optional);

	cJSON* jsoninstance_console_endpoint_1 = instance_console_endpoint_convertToJSON(instance_console_endpoint_1);
	printf("instance_console_endpoint :\n%s\n", cJSON_Print(jsoninstance_console_endpoint_1));
	instance_console_endpoint_t* instance_console_endpoint_2 = instance_console_endpoint_parseFromJSON(jsoninstance_console_endpoint_1);
	cJSON* jsoninstance_console_endpoint_2 = instance_console_endpoint_convertToJSON(instance_console_endpoint_2);
	printf("repeating instance_console_endpoint:\n%s\n", cJSON_Print(jsoninstance_console_endpoint_2));
}

int main() {
  test_instance_console_endpoint(1);
  test_instance_console_endpoint(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_console_endpoint_MAIN
#endif // instance_console_endpoint_TEST
