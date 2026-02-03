/*
========================================
Exercise 35
Difficulty: Hard
Topic: Recursion, Pointers, Binary Search
========================================

Write a C program that:

- Reads a sorted integer N (1 ≤ N ≤ 100).
- Reads N sorted integers into an array.
- Reads a target value T.
- Uses a **recursive function** to perform a **Binary Search**.
- The function must receive:
    - a pointer to the 'low' boundary (start of search range)
    - a pointer to the 'high' boundary (end of search range, inclusive)
    - the target value
- The search must be done using **only pointer arithmetic**.

Rules:
- Do NOT use array indexing.
- Do NOT use loops.
- Return 1 if found, 0 if not found.

Hint:
- To find the middle:
  1. Calculate distance: `int dist = high - low;`
  2. Get pointer to middle: `int *mid = low + (dist / 2);`
- Base case 1: If low > high, element not found.
- Base case 2: If *mid == target, found.
- Recursive step: Adjust low or high to `mid + 1` or `mid - 1`.

Example (input):
5
10 20 30 40 50
40

Expected output:
1
*/

#include <stdio.h>
#include <stdlib.h>

int binary_search(int *low, int *high, int search)
{
    if (low > high)
        return 0;

    int dist = (high - low) / 2;
    int *mid = low + dist;

    if (*mid > search)
        return binary_search(low, mid - 1, search);
    else if (*mid < search)
        return binary_search(mid + 1, high, search);
    else
        return 1;
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    int search;
    scanf("%d", &search);

    int result = binary_search(array, array + size - 1, search);
    printf("%d", result);
    free(array);
    return 0;
}