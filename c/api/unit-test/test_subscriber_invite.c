#ifndef subscriber_invite_TEST
#define subscriber_invite_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscriber_invite_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscriber_invite.h"
subscriber_invite_t* instantiate_subscriber_invite(int include_optional);

#include "test_coupon_options.c"
#include "test_plan_options.c"
#include "test_trial.c"


subscriber_invite_t* instantiate_subscriber_invite(int include_optional) {
  subscriber_invite_t* subscriber_invite = NULL;
  if (include_optional) {
    subscriber_invite = subscriber_invite_create(
       // false, not to have infinite recursion
      instantiate_coupon_options(0),
       // false, not to have infinite recursion
      instantiate_plan_options(0),
       // false, not to have infinite recursion
      instantiate_trial(0),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0"
    );
  } else {
    subscriber_invite = subscriber_invite_create(
      NULL,
      NULL,
      NULL,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0"
    );
  }

  return subscriber_invite;
}


#ifdef subscriber_invite_MAIN

void test_subscriber_invite(int include_optional) {
    subscriber_invite_t* subscriber_invite_1 = instantiate_subscriber_invite(include_optional);

	cJSON* jsonsubscriber_invite_1 = subscriber_invite_convertToJSON(subscriber_invite_1);
	printf("subscriber_invite :\n%s\n", cJSON_Print(jsonsubscriber_invite_1));
	subscriber_invite_t* subscriber_invite_2 = subscriber_invite_parseFromJSON(jsonsubscriber_invite_1);
	cJSON* jsonsubscriber_invite_2 = subscriber_invite_convertToJSON(subscriber_invite_2);
	printf("repeating subscriber_invite:\n%s\n", cJSON_Print(jsonsubscriber_invite_2));
}

int main() {
  test_subscriber_invite(1);
  test_subscriber_invite(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscriber_invite_MAIN
#endif // subscriber_invite_TEST
