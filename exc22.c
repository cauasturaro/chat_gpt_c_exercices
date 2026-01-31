/*
========================================
Exercise 22
Difficulty: Medium+
Topic: Arrays, Pointers, Functions
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a function to count how many elements are **even numbers**.
- The function must receive:
    - a pointer to the first element of the array
    - the size of the array
- The array must be traversed using **only pointer arithmetic** inside the function.

Rules:
- Do NOT use array indexing inside the function.
- Do NOT use auxiliary arrays.
- Do NOT use built-in helper functions.
- Print ONLY the number of even elements, followed by a newline.

Example (input):
6
1 2 4 7 9 10

Expected output:
3
*/

#include <stdio.h>
#include <stdlib.h>

int how_many_evens(int *ptr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++, ptr++)
    {
        if (*ptr % 2 == 0)
            count++;
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

    printf("%d", how_many_evens(array, size));
    free(array);
    return 0;
}
