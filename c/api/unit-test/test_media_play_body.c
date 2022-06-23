#ifndef media_play_body_TEST
#define media_play_body_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define media_play_body_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/media_play_body.h"
media_play_body_t* instantiate_media_play_body(int include_optional);



media_play_body_t* instantiate_media_play_body(int include_optional) {
  media_play_body_t* media_play_body = NULL;
  if (include_optional) {
    media_play_body = media_play_body_create(
      "0",
      "0"
    );
  } else {
    media_play_body = media_play_body_create(
      "0",
      "0"
    );
  }

  return media_play_body;
}


#ifdef media_play_body_MAIN

void test_media_play_body(int include_optional) {
    media_play_body_t* media_play_body_1 = instantiate_media_play_body(include_optional);

	cJSON* jsonmedia_play_body_1 = media_play_body_convertToJSON(media_play_body_1);
	printf("media_play_body :\n%s\n", cJSON_Print(jsonmedia_play_body_1));
	media_play_body_t* media_play_body_2 = media_play_body_parseFromJSON(jsonmedia_play_body_1);
	cJSON* jsonmedia_play_body_2 = media_play_body_convertToJSON(media_play_body_2);
	printf("repeating media_play_body:\n%s\n", cJSON_Print(jsonmedia_play_body_2));
}

int main() {
  test_media_play_body(1);
  test_media_play_body(0);

  printf("Hello world \n");
  return 0;
}

#endif // media_play_body_MAIN
#endif // media_play_body_TEST
