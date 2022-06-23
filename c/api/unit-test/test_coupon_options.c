#ifndef coupon_options_TEST
#define coupon_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define coupon_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/coupon_options.h"
coupon_options_t* instantiate_coupon_options(int include_optional);



coupon_options_t* instantiate_coupon_options(int include_optional) {
  coupon_options_t* coupon_options = NULL;
  if (include_optional) {
    coupon_options = coupon_options_create(
      arm_api_coupon_options_TYPE_percent,
      1.337,
      1
    );
  } else {
    coupon_options = coupon_options_create(
      arm_api_coupon_options_TYPE_percent,
      1.337,
      1
    );
  }

  return coupon_options;
}


#ifdef coupon_options_MAIN

void test_coupon_options(int include_optional) {
    coupon_options_t* coupon_options_1 = instantiate_coupon_options(include_optional);

	cJSON* jsoncoupon_options_1 = coupon_options_convertToJSON(coupon_options_1);
	printf("coupon_options :\n%s\n", cJSON_Print(jsoncoupon_options_1));
	coupon_options_t* coupon_options_2 = coupon_options_parseFromJSON(jsoncoupon_options_1);
	cJSON* jsoncoupon_options_2 = coupon_options_convertToJSON(coupon_options_2);
	printf("repeating coupon_options:\n%s\n", cJSON_Print(jsoncoupon_options_2));
}

int main() {
  test_coupon_options(1);
  test_coupon_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // coupon_options_MAIN
#endif // coupon_options_TEST
