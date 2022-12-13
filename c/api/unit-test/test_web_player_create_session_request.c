#ifndef web_player_create_session_request_TEST
#define web_player_create_session_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_player_create_session_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_player_create_session_request.h"
web_player_create_session_request_t* instantiate_web_player_create_session_request(int include_optional);

#include "test_features.c"


web_player_create_session_request_t* instantiate_web_player_create_session_request(int include_optional) {
  web_player_create_session_request_t* web_player_create_session_request = NULL;
  if (include_optional) {
    web_player_create_session_request = web_player_create_session_request_create(
      "0",
      "0",
      1.337,
       // false, not to have infinite recursion
      instantiate_features(0),
      "0"
    );
  } else {
    web_player_create_session_request = web_player_create_session_request_create(
      "0",
      "0",
      1.337,
      NULL,
      "0"
    );
  }

  return web_player_create_session_request;
}


#ifdef web_player_create_session_request_MAIN

void test_web_player_create_session_request(int include_optional) {
    web_player_create_session_request_t* web_player_create_session_request_1 = instantiate_web_player_create_session_request(include_optional);

	cJSON* jsonweb_player_create_session_request_1 = web_player_create_session_request_convertToJSON(web_player_create_session_request_1);
	printf("web_player_create_session_request :\n%s\n", cJSON_Print(jsonweb_player_create_session_request_1));
	web_player_create_session_request_t* web_player_create_session_request_2 = web_player_create_session_request_parseFromJSON(jsonweb_player_create_session_request_1);
	cJSON* jsonweb_player_create_session_request_2 = web_player_create_session_request_convertToJSON(web_player_create_session_request_2);
	printf("repeating web_player_create_session_request:\n%s\n", cJSON_Print(jsonweb_player_create_session_request_2));
}

int main() {
  test_web_player_create_session_request(1);
  test_web_player_create_session_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_player_create_session_request_MAIN
#endif // web_player_create_session_request_TEST
