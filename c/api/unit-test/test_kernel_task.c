#ifndef kernel_task_TEST
#define kernel_task_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define kernel_task_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/kernel_task.h"
kernel_task_t* instantiate_kernel_task(int include_optional);



kernel_task_t* instantiate_kernel_task(int include_optional) {
  kernel_task_t* kernel_task = NULL;
  if (include_optional) {
    kernel_task = kernel_task_create(
      "0",
      "0",
      56,
      list_createList()
    );
  } else {
    kernel_task = kernel_task_create(
      "0",
      "0",
      56,
      list_createList()
    );
  }

  return kernel_task;
}


#ifdef kernel_task_MAIN

void test_kernel_task(int include_optional) {
    kernel_task_t* kernel_task_1 = instantiate_kernel_task(include_optional);

	cJSON* jsonkernel_task_1 = kernel_task_convertToJSON(kernel_task_1);
	printf("kernel_task :\n%s\n", cJSON_Print(jsonkernel_task_1));
	kernel_task_t* kernel_task_2 = kernel_task_parseFromJSON(jsonkernel_task_1);
	cJSON* jsonkernel_task_2 = kernel_task_convertToJSON(kernel_task_2);
	printf("repeating kernel_task:\n%s\n", cJSON_Print(jsonkernel_task_2));
}

int main() {
  test_kernel_task(1);
  test_kernel_task(0);

  printf("Hello world \n");
  return 0;
}

#endif // kernel_task_MAIN
#endif // kernel_task_TEST
