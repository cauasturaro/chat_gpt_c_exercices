/*
========================================
Exercise 01
Difficulty: Easy
Topic: Input / Output, Variables, Operators
========================================

Write a C program that:

- Reads two integers from standard input.
- Prints, each on a separate line:
  1) The sum of the two numbers
  2) The difference (first number minus the second)
  3) The product of the two numbers
  4) The integer division (first number divided by the second)

Constraints:
- The second number is guaranteed to be non-zero.
- Print ONLY the numeric results.
- Do not print any extra text, symbols, or labels.

Example (input):
8 2

Expected output:
10
6
16
4
*/

#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n%d\n%d\n%d", a + b, a - b, a * b, a / b);
}
