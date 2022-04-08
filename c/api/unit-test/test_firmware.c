#ifndef firmware_TEST
#define firmware_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define firmware_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/firmware.h"
firmware_t* instantiate_firmware(int include_optional);



firmware_t* instantiate_firmware(int include_optional) {
  firmware_t* firmware = NULL;
  if (include_optional) {
    firmware = firmware_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      0,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    firmware = firmware_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      0,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return firmware;
}


#ifdef firmware_MAIN

void test_firmware(int include_optional) {
    firmware_t* firmware_1 = instantiate_firmware(include_optional);

	cJSON* jsonfirmware_1 = firmware_convertToJSON(firmware_1);
	printf("firmware :\n%s\n", cJSON_Print(jsonfirmware_1));
	firmware_t* firmware_2 = firmware_parseFromJSON(jsonfirmware_1);
	cJSON* jsonfirmware_2 = firmware_convertToJSON(firmware_2);
	printf("repeating firmware:\n%s\n", cJSON_Print(jsonfirmware_2));
}

int main() {
  test_firmware(1);
  test_firmware(0);

  printf("Hello world \n");
  return 0;
}

#endif // firmware_MAIN
#endif // firmware_TEST
