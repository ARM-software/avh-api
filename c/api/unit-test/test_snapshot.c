#ifndef snapshot_TEST
#define snapshot_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define snapshot_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/snapshot.h"
snapshot_t* instantiate_snapshot(int include_optional);

#include "test_snapshot_status.c"


snapshot_t* instantiate_snapshot(int include_optional) {
  snapshot_t* snapshot = NULL;
  if (include_optional) {
    snapshot = snapshot_create(
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_snapshot_status(0),
      1.337,
      1,
      1,
      1
    );
  } else {
    snapshot = snapshot_create(
      "0",
      "0",
      "0",
      NULL,
      1.337,
      1,
      1,
      1
    );
  }

  return snapshot;
}


#ifdef snapshot_MAIN

void test_snapshot(int include_optional) {
    snapshot_t* snapshot_1 = instantiate_snapshot(include_optional);

	cJSON* jsonsnapshot_1 = snapshot_convertToJSON(snapshot_1);
	printf("snapshot :\n%s\n", cJSON_Print(jsonsnapshot_1));
	snapshot_t* snapshot_2 = snapshot_parseFromJSON(jsonsnapshot_1);
	cJSON* jsonsnapshot_2 = snapshot_convertToJSON(snapshot_2);
	printf("repeating snapshot:\n%s\n", cJSON_Print(jsonsnapshot_2));
}

int main() {
  test_snapshot(1);
  test_snapshot(0);

  printf("Hello world \n");
  return 0;
}

#endif // snapshot_MAIN
#endif // snapshot_TEST
