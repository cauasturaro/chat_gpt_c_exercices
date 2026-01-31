/*
========================================
Exercise 07
Difficulty: Medium
Topic: Functions, Recursion
========================================

Write a C program that:

- Reads one integer N (0 ≤ N ≤ 12) from standard input.
- Computes the **factorial** of N using a **recursive function**.
- Prints the factorial.

Constraints:
- Use a separate function `int factorial(int n)` to compute the result.
- Print ONLY the number, followed by a newline.

Example (input):
5

Expected output:
120
*/

#include <stdio.h>

int factorial(int n) // 5 * 4 * 3 * 2 * 1
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main(void)
{
    int value, res;
    scanf("%d", &value);
    res = factorial(value);
    printf("%d\n", res);
}