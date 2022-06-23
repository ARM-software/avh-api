#ifndef invite_revoke_params_TEST
#define invite_revoke_params_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invite_revoke_params_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invite_revoke_params.h"
invite_revoke_params_t* instantiate_invite_revoke_params(int include_optional);

#include "test_invite_revoke_params_ids.c"


invite_revoke_params_t* instantiate_invite_revoke_params(int include_optional) {
  invite_revoke_params_t* invite_revoke_params = NULL;
  if (include_optional) {
    invite_revoke_params = invite_revoke_params_create(
      null
    );
  } else {
    invite_revoke_params = invite_revoke_params_create(
      null
    );
  }

  return invite_revoke_params;
}


#ifdef invite_revoke_params_MAIN

void test_invite_revoke_params(int include_optional) {
    invite_revoke_params_t* invite_revoke_params_1 = instantiate_invite_revoke_params(include_optional);

	cJSON* jsoninvite_revoke_params_1 = invite_revoke_params_convertToJSON(invite_revoke_params_1);
	printf("invite_revoke_params :\n%s\n", cJSON_Print(jsoninvite_revoke_params_1));
	invite_revoke_params_t* invite_revoke_params_2 = invite_revoke_params_parseFromJSON(jsoninvite_revoke_params_1);
	cJSON* jsoninvite_revoke_params_2 = invite_revoke_params_convertToJSON(invite_revoke_params_2);
	printf("repeating invite_revoke_params:\n%s\n", cJSON_Print(jsoninvite_revoke_params_2));
}

int main() {
  test_invite_revoke_params(1);
  test_invite_revoke_params(0);

  printf("Hello world \n");
  return 0;
}

#endif // invite_revoke_params_MAIN
#endif // invite_revoke_params_TEST
