#ifndef grant_trial_request_response_TEST
#define grant_trial_request_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define grant_trial_request_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/grant_trial_request_response.h"
grant_trial_request_response_t* instantiate_grant_trial_request_response(int include_optional);



grant_trial_request_response_t* instantiate_grant_trial_request_response(int include_optional) {
  grant_trial_request_response_t* grant_trial_request_response = NULL;
  if (include_optional) {
    grant_trial_request_response = grant_trial_request_response_create(
      "0"
    );
  } else {
    grant_trial_request_response = grant_trial_request_response_create(
      "0"
    );
  }

  return grant_trial_request_response;
}


#ifdef grant_trial_request_response_MAIN

void test_grant_trial_request_response(int include_optional) {
    grant_trial_request_response_t* grant_trial_request_response_1 = instantiate_grant_trial_request_response(include_optional);

	cJSON* jsongrant_trial_request_response_1 = grant_trial_request_response_convertToJSON(grant_trial_request_response_1);
	printf("grant_trial_request_response :\n%s\n", cJSON_Print(jsongrant_trial_request_response_1));
	grant_trial_request_response_t* grant_trial_request_response_2 = grant_trial_request_response_parseFromJSON(jsongrant_trial_request_response_1);
	cJSON* jsongrant_trial_request_response_2 = grant_trial_request_response_convertToJSON(grant_trial_request_response_2);
	printf("repeating grant_trial_request_response:\n%s\n", cJSON_Print(jsongrant_trial_request_response_2));
}

int main() {
  test_grant_trial_request_response(1);
  test_grant_trial_request_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // grant_trial_request_response_MAIN
#endif // grant_trial_request_response_TEST
