/*
========================================
Exercise 28
Difficulty: Medium+
Topic: Arrays, Pointers, Functions
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a function to compute the **sum of the odd numbers** in the array.
- The function must receive:
    - a pointer to the first element of the array
    - the size of the array
- The array must be traversed using **only pointer arithmetic** inside the function.

Rules:
- Do NOT use array indexing inside the function.
- Do NOT use auxiliary arrays.
- Do NOT use built-in helper functions.
- Print ONLY the sum of odd elements, followed by a newline.

Example (input):
6
1 2 4 7 9 10

Expected output:
17
*/
#include <stdio.h>
#include <stdlib.h>

int sum_of_odds(int *ptr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++, ptr++)
    {
        if (*ptr % 2 != 0)
            sum += *ptr;
    }
    return sum;
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));
    int *ptr = array;
    for (int i = 0; i < size; i++, ptr++)
        scanf("%d", ptr);
    printf("%d\n", sum_of_odds(array, size));
    free(array);
    return 0;
}