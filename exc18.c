/*
========================================
Exercise 18
Difficulty: Medium+
Topic: Arrays, Pointers, Functions
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a function to find the **maximum value** in the array.
- The function must receive:
    - a pointer to the first element of the array
    - the size of the array
- The array must be traversed using **only pointer arithmetic** inside the function.

Rules:
- Do NOT use array indexing inside the function.
- Do NOT use built-in helper functions.
- Print ONLY the maximum value, followed by a newline.

Example (input):
5
3 9 2 7 1

Expected output:
9
*/

#include <stdio.h>
#include <stdlib.h>

int max(int *ptr, int size)
{
    int max = *ptr;
    ptr++;
    for (int i = 1; i < size; i++, ptr++)
    {
        if (max < *ptr)
            max = *ptr;
    }
    return max;
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));

    int *ptr = array;
    for (int i = 0; i < size; i++, ptr++)
        scanf("%d", ptr);

    printf("%d\n", max(array, size));
}