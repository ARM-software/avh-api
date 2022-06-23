#ifndef agreed_ack_TEST
#define agreed_ack_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define agreed_ack_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/agreed_ack.h"
agreed_ack_t* instantiate_agreed_ack(int include_optional);



agreed_ack_t* instantiate_agreed_ack(int include_optional) {
  agreed_ack_t* agreed_ack = NULL;
  if (include_optional) {
    agreed_ack = agreed_ack_create(
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    agreed_ack = agreed_ack_create(
      "2013-10-20T19:20:30+01:00"
    );
  }

  return agreed_ack;
}


#ifdef agreed_ack_MAIN

void test_agreed_ack(int include_optional) {
    agreed_ack_t* agreed_ack_1 = instantiate_agreed_ack(include_optional);

	cJSON* jsonagreed_ack_1 = agreed_ack_convertToJSON(agreed_ack_1);
	printf("agreed_ack :\n%s\n", cJSON_Print(jsonagreed_ack_1));
	agreed_ack_t* agreed_ack_2 = agreed_ack_parseFromJSON(jsonagreed_ack_1);
	cJSON* jsonagreed_ack_2 = agreed_ack_convertToJSON(agreed_ack_2);
	printf("repeating agreed_ack:\n%s\n", cJSON_Print(jsonagreed_ack_2));
}

int main() {
  test_agreed_ack(1);
  test_agreed_ack(0);

  printf("Hello world \n");
  return 0;
}

#endif // agreed_ack_MAIN
#endif // agreed_ack_TEST
