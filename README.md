# Static Array Module in C:

The Array module provides basic functionality for a static array in C. It includes functions to initialize, append, get and set elements in the array.

## Overview

The Array struct represents the static array, and it has two fields:

`elements`: an array of integers that stores the values of the elements.
`size`: an integer that indicates the number of elements currently in the array.

## Basic Operations
The code provides four methods to interact with the array:

1. `init`: initializes the array by setting its size to 0.
2. `append`: adds an element to the end of the array, if there is space available.
3. `get`: returns the value of the element at the specified index, or -1 if the index is out of bounds.
4. `set`: sets the value of the element at the specified index to the given value, if the index is in bounds.


## Usage
To use this code, you first need to include the "array.h" header file in your source file. 
Then, you can create an instance of the Array struct and use its methods to manipulate the array.

Here's an example of how to use the code:

~~~C
#include "array.h"
#include <stdio.h>

int main() {
    Array arr;
    init(&arr);

    append(&arr, 1);
    append(&arr, 2);
    append(&arr, 3);

    for (int i = 0; i < arr.size; i++) {
        printf("%d ", get(&arr, i));
    }
    printf("\n");

    set(&arr, 1, 4);

    for (int i = 0; i < arr.size; i++) {
        printf("%d ", get(&arr, i));
    }
    printf("\n");

    return 0;
}
~~~
