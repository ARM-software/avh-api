#ifndef invite_revoke_params_ids_TEST
#define invite_revoke_params_ids_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invite_revoke_params_ids_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invite_revoke_params_ids.h"
invite_revoke_params_ids_t* instantiate_invite_revoke_params_ids(int include_optional);



invite_revoke_params_ids_t* instantiate_invite_revoke_params_ids(int include_optional) {
  invite_revoke_params_ids_t* invite_revoke_params_ids = NULL;
  if (include_optional) {
    invite_revoke_params_ids = invite_revoke_params_ids_create(
    );
  } else {
    invite_revoke_params_ids = invite_revoke_params_ids_create(
    );
  }

  return invite_revoke_params_ids;
}


#ifdef invite_revoke_params_ids_MAIN

void test_invite_revoke_params_ids(int include_optional) {
    invite_revoke_params_ids_t* invite_revoke_params_ids_1 = instantiate_invite_revoke_params_ids(include_optional);

	cJSON* jsoninvite_revoke_params_ids_1 = invite_revoke_params_ids_convertToJSON(invite_revoke_params_ids_1);
	printf("invite_revoke_params_ids :\n%s\n", cJSON_Print(jsoninvite_revoke_params_ids_1));
	invite_revoke_params_ids_t* invite_revoke_params_ids_2 = invite_revoke_params_ids_parseFromJSON(jsoninvite_revoke_params_ids_1);
	cJSON* jsoninvite_revoke_params_ids_2 = invite_revoke_params_ids_convertToJSON(invite_revoke_params_ids_2);
	printf("repeating invite_revoke_params_ids:\n%s\n", cJSON_Print(jsoninvite_revoke_params_ids_2));
}

int main() {
  test_invite_revoke_params_ids(1);
  test_invite_revoke_params_ids(0);

  printf("Hello world \n");
  return 0;
}

#endif // invite_revoke_params_ids_MAIN
#endif // invite_revoke_params_ids_TEST
