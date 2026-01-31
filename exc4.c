/*
========================================
Exercise 04
Difficulty: Easy
Topic: Loops (while), Sum
========================================

Write a C program that:

- Reads integers from standard input until a negative number is entered.
- Computes the **sum** of all non-negative numbers entered.
- Prints the sum.

Constraints:
- Use a `while` loop.
- Do not include the negative number in the sum.
- Print ONLY the numeric result, followed by a newline.

Example (input):
5 3 8 -1

Expected output:
16
*/

#include <stdio.h>

int main(void)
{
    int current = 0;
    int number = 0;
    int sum = 0;

    do
    {
        scanf("%d", &number);
        if (number >= 0)
            sum += number;
    } while (number >= 0);

    printf("%d\n", sum);
}