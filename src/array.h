#ifndef ARRAY_H
#define ARRAY_H

#define MAX_SIZE 100

typedef struct {
    int elements[MAX_SIZE];
    int size;
} Array;

void init(Array *arr);
void append(Array *arr, int value);
int get(Array *arr, int index);
void set(Array *arr, int index, int value);

#endif /* ARRAY_H */