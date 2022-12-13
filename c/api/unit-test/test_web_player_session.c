#ifndef web_player_session_TEST
#define web_player_session_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_player_session_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_player_session.h"
web_player_session_t* instantiate_web_player_session(int include_optional);



web_player_session_t* instantiate_web_player_session(int include_optional) {
  web_player_session_t* web_player_session = NULL;
  if (include_optional) {
    web_player_session = web_player_session_create(
      "0",
      "0",
      1.337
    );
  } else {
    web_player_session = web_player_session_create(
      "0",
      "0",
      1.337
    );
  }

  return web_player_session;
}


#ifdef web_player_session_MAIN

void test_web_player_session(int include_optional) {
    web_player_session_t* web_player_session_1 = instantiate_web_player_session(include_optional);

	cJSON* jsonweb_player_session_1 = web_player_session_convertToJSON(web_player_session_1);
	printf("web_player_session :\n%s\n", cJSON_Print(jsonweb_player_session_1));
	web_player_session_t* web_player_session_2 = web_player_session_parseFromJSON(jsonweb_player_session_1);
	cJSON* jsonweb_player_session_2 = web_player_session_convertToJSON(web_player_session_2);
	printf("repeating web_player_session:\n%s\n", cJSON_Print(jsonweb_player_session_2));
}

int main() {
  test_web_player_session(1);
  test_web_player_session(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_player_session_MAIN
#endif // web_player_session_TEST
