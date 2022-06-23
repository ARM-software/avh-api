#ifndef trial_request_options_TEST
#define trial_request_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trial_request_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trial_request_options.h"
trial_request_options_t* instantiate_trial_request_options(int include_optional);

#include "test_address.c"
#include "test_trial_request_metadata.c"


trial_request_options_t* instantiate_trial_request_options(int include_optional) {
  trial_request_options_t* trial_request_options = NULL;
  if (include_optional) {
    trial_request_options = trial_request_options_create(
       // false, not to have infinite recursion
      instantiate_address(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_trial_request_metadata(0),
      1,
      "0"
    );
  } else {
    trial_request_options = trial_request_options_create(
      NULL,
      "0",
      "0",
      NULL,
      1,
      "0"
    );
  }

  return trial_request_options;
}


#ifdef trial_request_options_MAIN

void test_trial_request_options(int include_optional) {
    trial_request_options_t* trial_request_options_1 = instantiate_trial_request_options(include_optional);

	cJSON* jsontrial_request_options_1 = trial_request_options_convertToJSON(trial_request_options_1);
	printf("trial_request_options :\n%s\n", cJSON_Print(jsontrial_request_options_1));
	trial_request_options_t* trial_request_options_2 = trial_request_options_parseFromJSON(jsontrial_request_options_1);
	cJSON* jsontrial_request_options_2 = trial_request_options_convertToJSON(trial_request_options_2);
	printf("repeating trial_request_options:\n%s\n", cJSON_Print(jsontrial_request_options_2));
}

int main() {
  test_trial_request_options(1);
  test_trial_request_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // trial_request_options_MAIN
#endif // trial_request_options_TEST
