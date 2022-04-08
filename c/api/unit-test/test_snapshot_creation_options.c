#ifndef snapshot_creation_options_TEST
#define snapshot_creation_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define snapshot_creation_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/snapshot_creation_options.h"
snapshot_creation_options_t* instantiate_snapshot_creation_options(int include_optional);



snapshot_creation_options_t* instantiate_snapshot_creation_options(int include_optional) {
  snapshot_creation_options_t* snapshot_creation_options = NULL;
  if (include_optional) {
    snapshot_creation_options = snapshot_creation_options_create(
      "0"
    );
  } else {
    snapshot_creation_options = snapshot_creation_options_create(
      "0"
    );
  }

  return snapshot_creation_options;
}


#ifdef snapshot_creation_options_MAIN

void test_snapshot_creation_options(int include_optional) {
    snapshot_creation_options_t* snapshot_creation_options_1 = instantiate_snapshot_creation_options(include_optional);

	cJSON* jsonsnapshot_creation_options_1 = snapshot_creation_options_convertToJSON(snapshot_creation_options_1);
	printf("snapshot_creation_options :\n%s\n", cJSON_Print(jsonsnapshot_creation_options_1));
	snapshot_creation_options_t* snapshot_creation_options_2 = snapshot_creation_options_parseFromJSON(jsonsnapshot_creation_options_1);
	cJSON* jsonsnapshot_creation_options_2 = snapshot_creation_options_convertToJSON(snapshot_creation_options_2);
	printf("repeating snapshot_creation_options:\n%s\n", cJSON_Print(jsonsnapshot_creation_options_2));
}

int main() {
  test_snapshot_creation_options(1);
  test_snapshot_creation_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // snapshot_creation_options_MAIN
#endif // snapshot_creation_options_TEST
