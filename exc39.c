/*
========================================
Exercise 39
Difficulty: Medium+
Topic: Recursion, Pointers, Validation
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a **recursive function** to check if the array is **Sorted in Ascending Order**.
- The function must receive:
    - a pointer to the current element
    - the size of the remaining array
- The check must be done using **only pointer arithmetic**.

Rules:
- Do NOT use array indexing.
- Do NOT use loops.
- Return 1 if sorted, 0 if not sorted.
- Strict ascending is not required (values can be equal, e.g., 1 2 2 3 is sorted).

Hint:
- Base case: If size is 0 or 1, it is sorted by definition. Return 1.
- Check step: If the current element (*ptr) is greater than the next element (*(ptr + 1)), return 0 immediately.
- Recursive step: If the check passes, recurse for the rest of the array (ptr + 1, size - 1).

Example (input):
5
1 2 3 4 5

Expected output:
1

Example (input):
5
1 2 4 3 5

Expected output:
0
*/

#include <stdio.h>
#include <stdlib.h>

int in_order_recursive(int *e, int size)
{
    if (size <= 1)
        return 1;

    if (*e > *(e + 1))
        return 0;

    return in_order_recursive(e + 1, size - 1);
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    printf("%d", in_order_recursive(array, size));
    free(array);
    return 0;
}