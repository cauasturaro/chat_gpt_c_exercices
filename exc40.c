/*
========================================
Exercise 40
Difficulty: Hard
Topic: Recursion, I/O, Stack Logic
========================================

Write a C program that:

- Reads a positive integer N (0 ≤ N ≤ 10000).
- Uses a **recursive function** to print the **Binary Representation** of N.
- The function receives the integer N.

Rules:
- Do NOT use arrays to store the bits.
- Do NOT use loops.
- Do NOT use bitwise shift operators (<<, >>) - use math operators (%, /).
- Print the bits strictly inside the function.
- Logic:
  - N % 2 gives the last bit (LSB).
  - N / 2 reduces the number.
  - You must verify WHERE to put the printf to ensure correct order (MSB to LSB).

Hint:
- If you printf BEFORE the recursive call, you print 10... (Reverse binary).
- If you printf AFTER the recursive call, the stack unwinds and prints ...01 (Correct binary).
- Base case: If N is 0, just return (or print 0 if it's the only input, handle that in main or with a wrapper).
- Note: For N > 1, recurse(N / 2) then printf("%d", N % 2).

Example (input):
10

Expected output:
1010

Example (input):
5

Expected output:
101
*/

#include <stdio.h>

void int_to_binary(int n)
{
    if (n == 0)
        return;

    int_to_binary(n / 2);
    printf("%d", n % 2);
}

int main(void)
{
    int value;
    scanf("%d", &value);

    int_to_binary(value);

    return 0;
}