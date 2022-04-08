#ifndef snapshot_status_TEST
#define snapshot_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define snapshot_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/snapshot_status.h"
snapshot_status_t* instantiate_snapshot_status(int include_optional);



snapshot_status_t* instantiate_snapshot_status(int include_optional) {
  snapshot_status_t* snapshot_status = NULL;
  if (include_optional) {
    snapshot_status = snapshot_status_create(
      "0",
      1
    );
  } else {
    snapshot_status = snapshot_status_create(
      "0",
      1
    );
  }

  return snapshot_status;
}


#ifdef snapshot_status_MAIN

void test_snapshot_status(int include_optional) {
    snapshot_status_t* snapshot_status_1 = instantiate_snapshot_status(include_optional);

	cJSON* jsonsnapshot_status_1 = snapshot_status_convertToJSON(snapshot_status_1);
	printf("snapshot_status :\n%s\n", cJSON_Print(jsonsnapshot_status_1));
	snapshot_status_t* snapshot_status_2 = snapshot_status_parseFromJSON(jsonsnapshot_status_1);
	cJSON* jsonsnapshot_status_2 = snapshot_status_convertToJSON(snapshot_status_2);
	printf("repeating snapshot_status:\n%s\n", cJSON_Print(jsonsnapshot_status_2));
}

int main() {
  test_snapshot_status(1);
  test_snapshot_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // snapshot_status_MAIN
#endif // snapshot_status_TEST
