/*
========================================
Exercise 29
Difficulty: Medium+
Topic: Arrays, Pointers, Functions
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a function to find the **second largest value** in the array.
- The function must receive:
    - a pointer to the first element of the array
    - the size of the array
- The array must be traversed using **only pointer arithmetic** inside the function.

Rules:
- Do NOT use array indexing inside the function.
- Do NOT use built-in helper functions.
- Do NOT use auxiliary arrays.
- Print ONLY the second largest value, followed by a newline.

Example (input):
5
3 9 2 7 1

Expected output:
7
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int sec_largest(int *ptr, int size)
{
    if (size < 2)
        return *ptr;

    int largest = *ptr;
    int sec_largest = INT_MIN;

    ptr++;
    for (int i = 1; i < size; i++, ptr++)
    {
        if (largest < *ptr)
        {
            sec_largest = largest;
            largest = *ptr;
        }
        else if (sec_largest < *ptr && *ptr != largest)
            sec_largest = *ptr;
    }

    return sec_largest;
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));
    int *ptr = array;
    for (int i = 0; i < size; i++, ptr++)
        scanf("%d", ptr);

    printf("%d\n", sec_largest(array, size));
    free(array);
    return 0;
}