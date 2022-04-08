#ifndef model_TEST
#define model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model.h"
model_t* instantiate_model(int include_optional);



model_t* instantiate_model(int include_optional) {
  model_t* model = NULL;
  if (include_optional) {
    model = model_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1
    );
  } else {
    model = model_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1
    );
  }

  return model;
}


#ifdef model_MAIN

void test_model(int include_optional) {
    model_t* model_1 = instantiate_model(include_optional);

	cJSON* jsonmodel_1 = model_convertToJSON(model_1);
	printf("model :\n%s\n", cJSON_Print(jsonmodel_1));
	model_t* model_2 = model_parseFromJSON(jsonmodel_1);
	cJSON* jsonmodel_2 = model_convertToJSON(model_2);
	printf("repeating model:\n%s\n", cJSON_Print(jsonmodel_2));
}

int main() {
  test_model(1);
  test_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_MAIN
#endif // model_TEST
