/*
========================================
Exercise 25
Difficulty: Medium+
Topic: Arrays, Pointers, Functions
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a function to compute the **average (mean)** of the array elements as a floating-point number.
- The function must receive:
    - a pointer to the first element of the array
    - the size of the array
- The array must be traversed using **only pointer arithmetic** inside the function.

Rules:
- Do NOT use array indexing inside the function.
- Do NOT use built-in helper functions.
- The function must return a `float` representing the average.
- Print ONLY the average, followed by a newline, with two decimal places.

Example (input):
5
2 4 6 8 10

Expected output:
6.00
*/

#include <stdio.h>
#include <stdlib.h>

float avg(int *ptr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++, ptr++)
        sum += *ptr;

    return (float)sum / size;
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));
    int *ptr = array;
    for (int i = 0; i < size; i++, ptr++)
        scanf("%d", ptr);

    printf("%.2f\n", avg(array, size));
    free(array);
    return 0;
}