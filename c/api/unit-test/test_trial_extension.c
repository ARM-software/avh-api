#ifndef trial_extension_TEST
#define trial_extension_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trial_extension_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trial_extension.h"
trial_extension_t* instantiate_trial_extension(int include_optional);



trial_extension_t* instantiate_trial_extension(int include_optional) {
  trial_extension_t* trial_extension = NULL;
  if (include_optional) {
    trial_extension = trial_extension_create(
      1.337,
      "0",
      1,
      "0"
    );
  } else {
    trial_extension = trial_extension_create(
      1.337,
      "0",
      1,
      "0"
    );
  }

  return trial_extension;
}


#ifdef trial_extension_MAIN

void test_trial_extension(int include_optional) {
    trial_extension_t* trial_extension_1 = instantiate_trial_extension(include_optional);

	cJSON* jsontrial_extension_1 = trial_extension_convertToJSON(trial_extension_1);
	printf("trial_extension :\n%s\n", cJSON_Print(jsontrial_extension_1));
	trial_extension_t* trial_extension_2 = trial_extension_parseFromJSON(jsontrial_extension_1);
	cJSON* jsontrial_extension_2 = trial_extension_convertToJSON(trial_extension_2);
	printf("repeating trial_extension:\n%s\n", cJSON_Print(jsontrial_extension_2));
}

int main() {
  test_trial_extension(1);
  test_trial_extension(0);

  printf("Hello world \n");
  return 0;
}

#endif // trial_extension_MAIN
#endif // trial_extension_TEST
