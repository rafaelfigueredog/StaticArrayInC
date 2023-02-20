#include "array.h"
#include <stdio.h>

int main() {
  Array arr;
  init(&arr);

  append(&arr, 1);
  append(&arr, 2);
  append(&arr, 3);

  printf("Array: [%d, %d, %d]\n", get(&arr, 0), get(&arr, 1),
         get(&arr, 2));

  set(&arr, 1, 4);

  printf("Array: [%d, %d, %d]\n", get(&arr, 0), get(&arr, 1),
         get(&arr, 2));

  return 0;
}