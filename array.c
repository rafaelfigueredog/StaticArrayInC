#include "array.h"

void init(Array *arr) { arr->size = 0; }

void append(Array *arr, int value) {
  if (arr->size < MAX_SIZE) {
    arr->elements[arr->size] = value;
    arr->size++;
  }
}

int get(Array *arr, int index) {
  if (index >= 0 && index < arr->size) {
    return arr->elements[index];
  }
  return -1; // return -1 to indicate an error
}

void set(Array *arr, int index, int value) {
  if (index >= 0 && index < arr->size) {
    arr->elements[index] = value;
  }
}

int getSize(const Array* arr) {
    return arr->size;
}