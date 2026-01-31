/*
========================================
Exercise 05
Difficulty: Medium
Topic: Arrays, Loops
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100) from standard input.
- Reads N integers and stores them in an array.
- Finds and prints:
  1) The **maximum value** in the array
  2) The **minimum value** in the array

Constraints:
- Print the maximum and minimum values on separate lines.
- Print ONLY the numbers, no extra text.
- Use loops to traverse the array.
- Do not use built-in sorting functions.

Example (input):
5
10 3 7 1 9

Expected output:
10
1
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int amount, min, max;
    scanf("%d", &amount);

    int *array = malloc(amount * sizeof(int));

    for (int i = 0; i < amount; i++)
    {
        scanf("%d", &array[i]);

        if (i == 0)
        {
            min = array[i];
            max = array[i];
        }

        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
    }

    printf("%d\n%d\n", max, min);

    free(array);
}