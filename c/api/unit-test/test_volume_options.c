#ifndef volume_options_TEST
#define volume_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define volume_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/volume_options.h"
volume_options_t* instantiate_volume_options(int include_optional);



volume_options_t* instantiate_volume_options(int include_optional) {
  volume_options_t* volume_options = NULL;
  if (include_optional) {
    volume_options = volume_options_create(
      1.337,
      list_createList(),
      "0"
    );
  } else {
    volume_options = volume_options_create(
      1.337,
      list_createList(),
      "0"
    );
  }

  return volume_options;
}


#ifdef volume_options_MAIN

void test_volume_options(int include_optional) {
    volume_options_t* volume_options_1 = instantiate_volume_options(include_optional);

	cJSON* jsonvolume_options_1 = volume_options_convertToJSON(volume_options_1);
	printf("volume_options :\n%s\n", cJSON_Print(jsonvolume_options_1));
	volume_options_t* volume_options_2 = volume_options_parseFromJSON(jsonvolume_options_1);
	cJSON* jsonvolume_options_2 = volume_options_convertToJSON(volume_options_2);
	printf("repeating volume_options:\n%s\n", cJSON_Print(jsonvolume_options_2));
}

int main() {
  test_volume_options(1);
  test_volume_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // volume_options_MAIN
#endif // volume_options_TEST
