#ifndef file_changes_TEST
#define file_changes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define file_changes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/file_changes.h"
file_changes_t* instantiate_file_changes(int include_optional);



file_changes_t* instantiate_file_changes(int include_optional) {
  file_changes_t* file_changes = NULL;
  if (include_optional) {
    file_changes = file_changes_create(
      "0",
      1.337,
      1.337,
      1.337
    );
  } else {
    file_changes = file_changes_create(
      "0",
      1.337,
      1.337,
      1.337
    );
  }

  return file_changes;
}


#ifdef file_changes_MAIN

void test_file_changes(int include_optional) {
    file_changes_t* file_changes_1 = instantiate_file_changes(include_optional);

	cJSON* jsonfile_changes_1 = file_changes_convertToJSON(file_changes_1);
	printf("file_changes :\n%s\n", cJSON_Print(jsonfile_changes_1));
	file_changes_t* file_changes_2 = file_changes_parseFromJSON(jsonfile_changes_1);
	cJSON* jsonfile_changes_2 = file_changes_convertToJSON(file_changes_2);
	printf("repeating file_changes:\n%s\n", cJSON_Print(jsonfile_changes_2));
}

int main() {
  test_file_changes(1);
  test_file_changes(0);

  printf("Hello world \n");
  return 0;
}

#endif // file_changes_MAIN
#endif // file_changes_TEST
