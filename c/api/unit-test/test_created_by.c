#ifndef created_by_TEST
#define created_by_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define created_by_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/created_by.h"
created_by_t* instantiate_created_by(int include_optional);



created_by_t* instantiate_created_by(int include_optional) {
  created_by_t* created_by = NULL;
  if (include_optional) {
    created_by = created_by_create(
      "0",
      "0",
      "0",
      1
    );
  } else {
    created_by = created_by_create(
      "0",
      "0",
      "0",
      1
    );
  }

  return created_by;
}


#ifdef created_by_MAIN

void test_created_by(int include_optional) {
    created_by_t* created_by_1 = instantiate_created_by(include_optional);

	cJSON* jsoncreated_by_1 = created_by_convertToJSON(created_by_1);
	printf("created_by :\n%s\n", cJSON_Print(jsoncreated_by_1));
	created_by_t* created_by_2 = created_by_parseFromJSON(jsoncreated_by_1);
	cJSON* jsoncreated_by_2 = created_by_convertToJSON(created_by_2);
	printf("repeating created_by:\n%s\n", cJSON_Print(jsoncreated_by_2));
}

int main() {
  test_created_by(1);
  test_created_by(0);

  printf("Hello world \n");
  return 0;
}

#endif // created_by_MAIN
#endif // created_by_TEST
