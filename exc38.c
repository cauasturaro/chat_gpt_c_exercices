/*
========================================
Exercise 38
Difficulty: Hard
Topic: Recursion, Pointers, Divide & Conquer
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Reads a Target value T.
- Uses a **recursive function** to count how many times T appears in the array.
- The strategy must be **Divide and Conquer**.
- The function must receive:
    - a pointer to the start of the range (low)
    - a pointer to the end of the range (high)
    - the target value
- The traversal must be done using **only pointer arithmetic**.

Rules:
- Do NOT use array indexing.
- Do NOT use loops.
- Do NOT use a linear scan / counter variable.
- Logic:
  1. Split the range in half.
  2. Count occurrences in the left half.
  3. Count occurrences in the right half.
  4. Return the sum of both counts.

Hint:
- Base case: If low == high (1 element), check if *low == target.
  - If yes, return 1.
  - If no, return 0.
- Recursive step:
  - mid = low + (high - low) / 2
  - count_left = function(low, mid, target)
  - count_right = function(mid + 1, high, target)
  - return count_left + count_right

Example (input):
6
2 5 2 8 2 5
2

Expected output:
3
*/

#include <stdio.h>
#include <stdlib.h>

int recursive_find_target(int *start, int *end, int target)
{
    if (start == end)
        return (*start == target) ? 1 : 0;

    int *mid = start + (end - start) / 2;
    int left = recursive_find_target(start, mid, target);
    int right = recursive_find_target(mid + 1, end, target);
    return left + right;
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    int target;
    scanf("%d", &target);

    printf("%d", recursive_find_target(array, array + size - 1, target));
    free(array);
    return 0;
}