/*
========================================
Exercise 37
Difficulty: Hard
Topic: Recursion, Pointers, Divide & Conquer
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Uses a **recursive function** to find the **Maximum Value** in the array.
- The strategy must be **Divide and Conquer** (split array in half).
- The function must receive:
    - a pointer to the start of the range (low)
    - a pointer to the end of the range (high)
- The traversal must be done using **only pointer arithmetic**.

Rules:
- Do NOT use array indexing.
- Do NOT use loops inside the recursive function.
- Do NOT use a linear scan (no `max(ptr+1, size-1)`).
- Logic:
  1. Calculate middle pointer.
  2. Recursively find max of left half.
  3. Recursively find max of right half.
  4. Return the greater of the two.

Hint:
- Base case: If low == high, the range has only 1 element. That element IS the maximum. Return *low.
- Recursive step:
  - mid = low + (high - low) / 2
  - left_max = function(low, mid)
  - right_max = function(mid + 1, high)
  - Compare left_max and right_max, return the largest.

Example (input):
5
10 50 20 80 30

Expected output:
80
*/

#include <stdio.h>
#include <stdlib.h>

int recursive_max(int *start, int *end)
{
  if (start == end)
    return *start;
  int *mid = (end - start) / 2;
  int left = recursive_max(start, mid);
  int right = recursive_max(mid + 1, end);
  return (left > right) ? left : right;
}

int main(void)
{
  int size;
  scanf("%d", &size);

  int *array = malloc(size * sizeof(int));
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  printf("%d", recursive_max(array, array + size - 1));
  free(array);
  return 0;
}