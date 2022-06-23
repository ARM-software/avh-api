#ifndef trial_TEST
#define trial_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trial_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trial.h"
trial_t* instantiate_trial(int include_optional);



trial_t* instantiate_trial(int include_optional) {
  trial_t* trial = NULL;
  if (include_optional) {
    trial = trial_create(
      1.337
    );
  } else {
    trial = trial_create(
      1.337
    );
  }

  return trial;
}


#ifdef trial_MAIN

void test_trial(int include_optional) {
    trial_t* trial_1 = instantiate_trial(include_optional);

	cJSON* jsontrial_1 = trial_convertToJSON(trial_1);
	printf("trial :\n%s\n", cJSON_Print(jsontrial_1));
	trial_t* trial_2 = trial_parseFromJSON(jsontrial_1);
	cJSON* jsontrial_2 = trial_convertToJSON(trial_2);
	printf("repeating trial:\n%s\n", cJSON_Print(jsontrial_2));
}

int main() {
  test_trial(1);
  test_trial(0);

  printf("Hello world \n");
  return 0;
}

#endif // trial_MAIN
#endif // trial_TEST
