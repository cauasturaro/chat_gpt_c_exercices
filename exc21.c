/*
========================================
Exercise 21
Difficulty: Medium+
Topic: Arrays, Pointers, Functions
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a function to **reverse the array in place**.
- The function must receive:
    - a pointer to the first element of the array
    - the size of the array
- The reversal must be done using **only pointer arithmetic**.

Rules:
- Do NOT use array indexing inside the function.
- Do NOT use auxiliary arrays.
- Do NOT use built-in helper functions.
- The original array must be modified.
- Print the reversed array, numbers separated by a single space, followed by a newline.

Example (input):
5
1 2 3 4 5

Expected output:
5 4 3 2 1
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(int *ptr, int size)
{
    // left & right pointers, swap pos
    int *left = ptr;
    int *right = ptr + size - 1;

    while (left < right)
    {
        swap(left, right);
        left++;
        right--;
    }
}

int main(void)
{
    int size;
    scanf("%d", &size);
    int *array = malloc(size * sizeof(int));

    int *ptr = array;
    for (int i = 0; i < size; i++, ptr++)
        scanf("%d", ptr);

    reverse_array(array, size);
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    printf("\n");

    free(array);
    return 0;
}