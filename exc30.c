#/*

Exercise 30
Difficulty: Medium+
Topic: Arrays, Pointers, Functions
==================================

Write a C program that:

* Reads an integer N (1 ≤ N ≤ 100).
* Reads N integers into an array.
* Uses a **recursive function** to compute the **sum of all elements** in the array.
* The function must receive:

  * a pointer to the first element of the array
  * the size of the array
* The array must be traversed using **only pointer arithmetic** inside the recursive function.

Rules:

* Do NOT use array indexing inside the function.
* Do NOT use loops inside the recursive function.
* Do NOT use built-in helper functions.
* Print ONLY the sum, followed by a newline.

Example (input):
5
1 2 3 4 5

Expected output:
15
*/

#include <stdio.h>
#include <stdlib.h>

int recursive_sum(int *ptr, int size)
{
    if (size == 1)
        return *ptr;

    return *ptr + recursive_sum(ptr + 1, size - 1);
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));
    int *ptr = array;
    for (int i = 0; i < size; i++, ptr++)
        scanf("%d", ptr);

    printf("%d\n", recursive_sum(array, size));
    free(array);
    return 0;
}