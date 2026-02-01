/*
========================================
Exercise 33
Difficulty: Medium+
Topic: Pointers, Arrays, Swapping
========================================

Write a C program that:

- Reads an integer N (2 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a function to **swap the first and the last elements** of the array.
- The function must receive:
    - a pointer to the first element
    - the size of the array
- The swap must be done using **only pointer arithmetic**.

Rules:
- Do NOT use array indexing inside the function (e.g., arr[0] or arr[size-1]).
- Do NOT use built-in helper functions.
- Modify the array in place.
- Print the modified array elements separated by spaces.

Hint:
- You have the pointer to the first element (*ptr).
- To get the address of the last element, think: `ptr + (size - 1)`.
- Use a temporary variable to hold one value while swapping.

Example (input):
5
10 20 30 40 50

Expected output:
50 20 30 40 10
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr, int size)
{
    int *first = ptr;
    int *last = ptr + size - 1;

    int temp = *first;
    *first = *last;
    *last = temp;
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    swap(array, size);

    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    printf("\n");
    free(array);
    return 0;
}
