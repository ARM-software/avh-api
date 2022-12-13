#ifndef kcrange_TEST
#define kcrange_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define kcrange_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/kcrange.h"
kcrange_t* instantiate_kcrange(int include_optional);



kcrange_t* instantiate_kcrange(int include_optional) {
  kcrange_t* kcrange = NULL;
  if (include_optional) {
    kcrange = kcrange_create(
      "0",
      list_createList()
    );
  } else {
    kcrange = kcrange_create(
      "0",
      list_createList()
    );
  }

  return kcrange;
}


#ifdef kcrange_MAIN

void test_kcrange(int include_optional) {
    kcrange_t* kcrange_1 = instantiate_kcrange(include_optional);

	cJSON* jsonkcrange_1 = kcrange_convertToJSON(kcrange_1);
	printf("kcrange :\n%s\n", cJSON_Print(jsonkcrange_1));
	kcrange_t* kcrange_2 = kcrange_parseFromJSON(jsonkcrange_1);
	cJSON* jsonkcrange_2 = kcrange_convertToJSON(kcrange_2);
	printf("repeating kcrange:\n%s\n", cJSON_Print(jsonkcrange_2));
}

int main() {
  test_kcrange(1);
  test_kcrange(0);

  printf("Hello world \n");
  return 0;
}

#endif // kcrange_MAIN
#endif // kcrange_TEST
