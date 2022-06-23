#ifndef rate_info_TEST
#define rate_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rate_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rate_info.h"
rate_info_t* instantiate_rate_info(int include_optional);



rate_info_t* instantiate_rate_info(int include_optional) {
  rate_info_t* rate_info = NULL;
  if (include_optional) {
    rate_info = rate_info_create(
      56,
      56
    );
  } else {
    rate_info = rate_info_create(
      56,
      56
    );
  }

  return rate_info;
}


#ifdef rate_info_MAIN

void test_rate_info(int include_optional) {
    rate_info_t* rate_info_1 = instantiate_rate_info(include_optional);

	cJSON* jsonrate_info_1 = rate_info_convertToJSON(rate_info_1);
	printf("rate_info :\n%s\n", cJSON_Print(jsonrate_info_1));
	rate_info_t* rate_info_2 = rate_info_parseFromJSON(jsonrate_info_1);
	cJSON* jsonrate_info_2 = rate_info_convertToJSON(rate_info_2);
	printf("repeating rate_info:\n%s\n", cJSON_Print(jsonrate_info_2));
}

int main() {
  test_rate_info(1);
  test_rate_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // rate_info_MAIN
#endif // rate_info_TEST
