/*
========================================
Exercise 34
Difficulty: Hard
Topic: Recursion, Pointers, Arrays
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a **recursive function** to reverse the array **in place**.
- The function must receive:
    - a pointer to the start of the (current) array segment
    - the size of the (current) segment
- The reversal must be done using **only pointer arithmetic**.

Rules:
- Do NOT use array indexing inside the function.
- Do NOT use loops (for/while) inside the function.
- Do NOT use auxiliary arrays.
- Print the reversed array.

Hint:
1. Swap the first element (*ptr) with the last element (*(ptr + size - 1)).
2. Recursively call the function for the *inner* part of the array.
   - The new "start" is the next element (ptr + 1).
   - The new "size" is the current size minus 2 (since we solved the two edges).
3. Base case: If size is 0 or 1, stop.

Example (input):
5
1 2 3 4 5

Expected output:
5 4 3 2 1
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void reversive_swapping(int *ptr, int size)
{
    if (size <= 1)
        return;
    swap(ptr, ptr + size - 1);
    reversive_swapping(ptr + 1, size - 2);
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    reversive_swapping(array, size);
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    printf("\n");
    free(array);
    return 0;
}