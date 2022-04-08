#ifndef model_software_TEST
#define model_software_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_software_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_software.h"
model_software_t* instantiate_model_software(int include_optional);



model_software_t* instantiate_model_software(int include_optional) {
  model_software_t* model_software = NULL;
  if (include_optional) {
    model_software = model_software_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      list_createList()
    );
  } else {
    model_software = model_software_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      list_createList()
    );
  }

  return model_software;
}


#ifdef model_software_MAIN

void test_model_software(int include_optional) {
    model_software_t* model_software_1 = instantiate_model_software(include_optional);

	cJSON* jsonmodel_software_1 = model_software_convertToJSON(model_software_1);
	printf("model_software :\n%s\n", cJSON_Print(jsonmodel_software_1));
	model_software_t* model_software_2 = model_software_parseFromJSON(jsonmodel_software_1);
	cJSON* jsonmodel_software_2 = model_software_convertToJSON(model_software_2);
	printf("repeating model_software:\n%s\n", cJSON_Print(jsonmodel_software_2));
}

int main() {
  test_model_software(1);
  test_model_software(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_software_MAIN
#endif // model_software_TEST
