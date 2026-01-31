/*
========================================
Exercise 14
Difficulty: Medium
Topic: Searching, Pointers
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100).
- Reads N integers into an array.
- Reads an integer X (the value to search for).
- Uses a **linear search implemented with pointers** to find X in the array.
- Prints the **index (0-based)** of the first occurrence of X.
- If X is not found, print -1.

Constraints:
- Do NOT use array indexing to traverse the array during the search.
- Use only pointer arithmetic to scan the array.
- Print ONLY the result number, followed by a newline.

Example (input):
5
3 1 4 2 5
4

Expected output:
2
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size, search;

    scanf("%d", &size);
    int *array = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    scanf("%d", &search);

    int *ptr = array;
    int found = -1;
    for (int i = 0; i < size; i++, ptr++)
    {
        if (*ptr == search)
        {
            found = i;
            break;
        }
    }

    printf("%d\n", found);
    free(array);
}
