#ifndef invitation_TEST
#define invitation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invitation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invitation.h"
invitation_t* instantiate_invitation(int include_optional);



invitation_t* instantiate_invitation(int include_optional) {
  invitation_t* invitation = NULL;
  if (include_optional) {
    invitation = invitation_create(
      "0",
      "0",
      0
    );
  } else {
    invitation = invitation_create(
      "0",
      "0",
      0
    );
  }

  return invitation;
}


#ifdef invitation_MAIN

void test_invitation(int include_optional) {
    invitation_t* invitation_1 = instantiate_invitation(include_optional);

	cJSON* jsoninvitation_1 = invitation_convertToJSON(invitation_1);
	printf("invitation :\n%s\n", cJSON_Print(jsoninvitation_1));
	invitation_t* invitation_2 = invitation_parseFromJSON(jsoninvitation_1);
	cJSON* jsoninvitation_2 = invitation_convertToJSON(invitation_2);
	printf("repeating invitation:\n%s\n", cJSON_Print(jsoninvitation_2));
}

int main() {
  test_invitation(1);
  test_invitation(0);

  printf("Hello world \n");
  return 0;
}

#endif // invitation_MAIN
#endif // invitation_TEST
