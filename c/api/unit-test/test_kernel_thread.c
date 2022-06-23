#ifndef kernel_thread_TEST
#define kernel_thread_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define kernel_thread_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/kernel_thread.h"
kernel_thread_t* instantiate_kernel_thread(int include_optional);



kernel_thread_t* instantiate_kernel_thread(int include_optional) {
  kernel_thread_t* kernel_thread = NULL;
  if (include_optional) {
    kernel_thread = kernel_thread_create(
      "0",
      56,
      list_createList()
    );
  } else {
    kernel_thread = kernel_thread_create(
      "0",
      56,
      list_createList()
    );
  }

  return kernel_thread;
}


#ifdef kernel_thread_MAIN

void test_kernel_thread(int include_optional) {
    kernel_thread_t* kernel_thread_1 = instantiate_kernel_thread(include_optional);

	cJSON* jsonkernel_thread_1 = kernel_thread_convertToJSON(kernel_thread_1);
	printf("kernel_thread :\n%s\n", cJSON_Print(jsonkernel_thread_1));
	kernel_thread_t* kernel_thread_2 = kernel_thread_parseFromJSON(jsonkernel_thread_1);
	cJSON* jsonkernel_thread_2 = kernel_thread_convertToJSON(kernel_thread_2);
	printf("repeating kernel_thread:\n%s\n", cJSON_Print(jsonkernel_thread_2));
}

int main() {
  test_kernel_thread(1);
  test_kernel_thread(0);

  printf("Hello world \n");
  return 0;
}

#endif // kernel_thread_MAIN
#endif // kernel_thread_TEST
