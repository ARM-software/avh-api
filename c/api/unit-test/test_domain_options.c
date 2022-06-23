#ifndef domain_options_TEST
#define domain_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_options.h"
domain_options_t* instantiate_domain_options(int include_optional);

#include "test_trial_extension.c"


domain_options_t* instantiate_domain_options(int include_optional) {
  domain_options_t* domain_options = NULL;
  if (include_optional) {
    domain_options = domain_options_create(
      1,
       // false, not to have infinite recursion
      instantiate_trial_extension(0)
    );
  } else {
    domain_options = domain_options_create(
      1,
      NULL
    );
  }

  return domain_options;
}


#ifdef domain_options_MAIN

void test_domain_options(int include_optional) {
    domain_options_t* domain_options_1 = instantiate_domain_options(include_optional);

	cJSON* jsondomain_options_1 = domain_options_convertToJSON(domain_options_1);
	printf("domain_options :\n%s\n", cJSON_Print(jsondomain_options_1));
	domain_options_t* domain_options_2 = domain_options_parseFromJSON(jsondomain_options_1);
	cJSON* jsondomain_options_2 = domain_options_convertToJSON(domain_options_2);
	printf("repeating domain_options:\n%s\n", cJSON_Print(jsondomain_options_2));
}

int main() {
  test_domain_options(1);
  test_domain_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_options_MAIN
#endif // domain_options_TEST
