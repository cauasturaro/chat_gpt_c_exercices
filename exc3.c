/*
========================================
Exercise 03
Difficulty: Easy
Topic: Loops (for)
========================================

Write a C program that:

- Reads one integer N (1 ≤ N ≤ 20) from standard input.
- Prints the first N positive integers (starting from 1), each on a separate line.

Constraints:
- Use a `for` loop.
- Print ONLY the numbers, no extra text.
- Each number must be on its own line.

Example (input):
5

Expected output:
1
2
3
4
5
*/

#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);

    for (int i = 1; i <= value; i++)
        printf("%d\n", i);
}