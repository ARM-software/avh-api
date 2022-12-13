#ifndef features_TEST
#define features_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define features_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/features.h"
features_t* instantiate_features(int include_optional);



features_t* instantiate_features(int include_optional) {
  features_t* features = NULL;
  if (include_optional) {
    features = features_create(
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    features = features_create(
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  }

  return features;
}


#ifdef features_MAIN

void test_features(int include_optional) {
    features_t* features_1 = instantiate_features(include_optional);

	cJSON* jsonfeatures_1 = features_convertToJSON(features_1);
	printf("features :\n%s\n", cJSON_Print(jsonfeatures_1));
	features_t* features_2 = features_parseFromJSON(jsonfeatures_1);
	cJSON* jsonfeatures_2 = features_convertToJSON(features_2);
	printf("repeating features:\n%s\n", cJSON_Print(jsonfeatures_2));
}

int main() {
  test_features(1);
  test_features(0);

  printf("Hello world \n");
  return 0;
}

#endif // features_MAIN
#endif // features_TEST
