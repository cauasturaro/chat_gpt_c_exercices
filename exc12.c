/*
========================================
Exercise 12
Difficulty: Medium
Topic: Functions, Recursion
========================================

Write a C program that:

- Reads an integer N (0 ≤ N ≤ 20) from standard input.
- Computes the N-th Fibonacci number using a **recursive function**.
- Prints ONLY the Fibonacci number, followed by a newline.

Constraints:
- Use a separate function `int fibonacci(int n)` to compute the result.
- The Fibonacci sequence is defined as:
    F(0) = 0
    F(1) = 1
    F(n) = F(n-1) + F(n-2), for n ≥ 2
- Print ONLY the number, no extra text.

Example (input):
7

Expected output:
13
*/

#include <stdio.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    int number;
    scanf("%d", &number);

    int res = fib(number);
    printf("%d\n", res);
}