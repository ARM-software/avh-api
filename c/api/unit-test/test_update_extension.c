#ifndef update_extension_TEST
#define update_extension_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_extension_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_extension.h"
update_extension_t* instantiate_update_extension(int include_optional);



update_extension_t* instantiate_update_extension(int include_optional) {
  update_extension_t* update_extension = NULL;
  if (include_optional) {
    update_extension = update_extension_create(
      1
    );
  } else {
    update_extension = update_extension_create(
      1
    );
  }

  return update_extension;
}


#ifdef update_extension_MAIN

void test_update_extension(int include_optional) {
    update_extension_t* update_extension_1 = instantiate_update_extension(include_optional);

	cJSON* jsonupdate_extension_1 = update_extension_convertToJSON(update_extension_1);
	printf("update_extension :\n%s\n", cJSON_Print(jsonupdate_extension_1));
	update_extension_t* update_extension_2 = update_extension_parseFromJSON(jsonupdate_extension_1);
	cJSON* jsonupdate_extension_2 = update_extension_convertToJSON(update_extension_2);
	printf("repeating update_extension:\n%s\n", cJSON_Print(jsonupdate_extension_2));
}

int main() {
  test_update_extension(1);
  test_update_extension(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_extension_MAIN
#endif // update_extension_TEST
