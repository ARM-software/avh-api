#ifndef instance_return_TEST
#define instance_return_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instance_return_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instance_return.h"
instance_return_t* instantiate_instance_return(int include_optional);



instance_return_t* instantiate_instance_return(int include_optional) {
  instance_return_t* instance_return = NULL;
  if (include_optional) {
    instance_return = instance_return_create(
      "0",
      arm_api_instance_return__on
    );
  } else {
    instance_return = instance_return_create(
      "0",
      arm_api_instance_return__on
    );
  }

  return instance_return;
}


#ifdef instance_return_MAIN

void test_instance_return(int include_optional) {
    instance_return_t* instance_return_1 = instantiate_instance_return(include_optional);

	cJSON* jsoninstance_return_1 = instance_return_convertToJSON(instance_return_1);
	printf("instance_return :\n%s\n", cJSON_Print(jsoninstance_return_1));
	instance_return_t* instance_return_2 = instance_return_parseFromJSON(jsoninstance_return_1);
	cJSON* jsoninstance_return_2 = instance_return_convertToJSON(instance_return_2);
	printf("repeating instance_return:\n%s\n", cJSON_Print(jsoninstance_return_2));
}

int main() {
  test_instance_return(1);
  test_instance_return(0);

  printf("Hello world \n");
  return 0;
}

#endif // instance_return_MAIN
#endif // instance_return_TEST
