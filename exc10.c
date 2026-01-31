/*
========================================
Exercise 10
Difficulty: Medium
Topic: Pointers, Arrays
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100) from standard input.
- Reads N integers into an array.
- Uses a **pointer** to traverse the array and find the **maximum value**.
- Prints ONLY the maximum value, followed by a newline.

Constraints:
- Do NOT use array indexing to find the maximum.
- Use only pointer arithmetic to traverse the array.
- Print ONLY the number, no extra text.

Example (input):
5
3 7 2 9 4

Expected output:
9
*/

#include <stdio.h>

int main(void)
{
    int size, max;
    scanf("%d", &size);
    int *array = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int *ptr = array;
    max = *ptr;
    for (int i = 0; i < size; i++, ptr++)
    {
        if (*ptr > max)
            max = *ptr;
    }

    printf("%d\n", max);
    free(array);
}