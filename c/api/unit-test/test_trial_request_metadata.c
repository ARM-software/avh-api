#ifndef trial_request_metadata_TEST
#define trial_request_metadata_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trial_request_metadata_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trial_request_metadata.h"
trial_request_metadata_t* instantiate_trial_request_metadata(int include_optional);



trial_request_metadata_t* instantiate_trial_request_metadata(int include_optional) {
  trial_request_metadata_t* trial_request_metadata = NULL;
  if (include_optional) {
    trial_request_metadata = trial_request_metadata_create(
      "0",
      "0",
      1,
      1,
      1,
      "0"
    );
  } else {
    trial_request_metadata = trial_request_metadata_create(
      "0",
      "0",
      1,
      1,
      1,
      "0"
    );
  }

  return trial_request_metadata;
}


#ifdef trial_request_metadata_MAIN

void test_trial_request_metadata(int include_optional) {
    trial_request_metadata_t* trial_request_metadata_1 = instantiate_trial_request_metadata(include_optional);

	cJSON* jsontrial_request_metadata_1 = trial_request_metadata_convertToJSON(trial_request_metadata_1);
	printf("trial_request_metadata :\n%s\n", cJSON_Print(jsontrial_request_metadata_1));
	trial_request_metadata_t* trial_request_metadata_2 = trial_request_metadata_parseFromJSON(jsontrial_request_metadata_1);
	cJSON* jsontrial_request_metadata_2 = trial_request_metadata_convertToJSON(trial_request_metadata_2);
	printf("repeating trial_request_metadata:\n%s\n", cJSON_Print(jsontrial_request_metadata_2));
}

int main() {
  test_trial_request_metadata(1);
  test_trial_request_metadata(0);

  printf("Hello world \n");
  return 0;
}

#endif // trial_request_metadata_MAIN
#endif // trial_request_metadata_TEST
