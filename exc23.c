/*
========================================
Exercise 23
Difficulty: Medium+
Topic: Arrays, Pointers, Functions
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a function to find the **minimum value** in the array.
- The function must receive:
    - a pointer to the first element of the array
    - the size of the array
- The array must be traversed using **only pointer arithmetic** inside the function.

Rules:
- Do NOT use array indexing inside the function.
- Do NOT use built-in helper functions.
- Do NOT use auxiliary arrays.
- Print ONLY the minimum value, followed by a newline.

Example (input):
5
8 3 10 2 7

Expected output:
2
*/

#include <stdio.h>
#include <stdlib.h>

int min(int *ptr, int size)
{
    int min = *ptr;
    ptr++;
    for (int i = 1; i < size; i++, ptr++)
    {
        if (min > *ptr)
            min = *ptr;
    }
    return min;
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));

    int *ptr = array;
    for (int i = 0; i < size; i++, ptr++)
        scanf("%d", ptr);

    printf("%d\n", min(array, size));
    free(array);
    return 0;
}