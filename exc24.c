/*
========================================
Exercise 24
Difficulty: Medium+
Topic: Arrays, Pointers, Functions
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a function to count how many times the **min_amountimum value** appears in the array.
- The function must receive:
    - a pointer to the first element of the array
    - the size of the array
- The array must be traversed using **only pointer arithmetic** inside the function.

Rules:
- Do NOT use array indexing inside the function.
- Do NOT use auxiliary arrays.
- Do NOT use built-in helper functions.
- The function must not modify the array.
- Print ONLY the number of occurrences of the min_amountimum value, followed by a newline.

Example (input):
7
4 2 9 2 5 2 8

Expected output:
3
*/

#include <stdio.h>
#include <stdlib.h>

int min_amount(int *ptr, int size)
{
    int min = *ptr;
    int count = 0;
    for (int i = 0; i < size; i++, ptr++)
    {
        if (min == *ptr)
            count++;

        if (min > *ptr)
        {
            min = *ptr;
            count = 1;
        }
    }

    return count;
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));

    int *ptr = array;
    for (int i = 0; i < size; i++, ptr++)
        scanf("%d", ptr);

    printf("%d\n", min_amount(array, size));
    free(array);
    return 0;
}