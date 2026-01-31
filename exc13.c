/*
========================================
Exercise 13
Difficulty: Medium
Topic: Arrays, Sorting
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100) from standard input.
- Reads N integers into an array.
- Sorts the array in **ascending order** using the **bubble sort algorithm**.
- Prints the sorted array, numbers separated by spaces.

Constraints:
- Do NOT use built-in sort functions.
- Print only the sorted numbers separated by a single space, with a newline at the end.

Example (input):
5
3 1 4 2 5

Expected output:
1 2 3 4 5
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void bubble_sort(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
        }
    }
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    bubble_sort(array, size);

    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    printf("\n");
}