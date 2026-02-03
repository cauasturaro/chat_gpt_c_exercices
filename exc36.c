/*
========================================
Exercise 36
Difficulty: Hard
Topic: Recursion, Strings, Pointers
========================================

Write a C program that:

- Reads a string from standard input (max 100 chars).
- Uses a **recursive function** to check if the string is a **palindrome**.
- The function must receive:
    - a pointer to the start of the string (or current segment)
    - a pointer to the end of the string (or current segment)
- The check must be done using **only pointer arithmetic**.

Rules:
- Do NOT use array indexing.
- Do NOT use loops inside the recursive function.
- Do NOT use string library functions (strlen, etc) inside the recursive function.
- Return 1 if it is a palindrome, 0 if not.

Hint:
- Base case 1: If start >= end, pointers crossed or met. Means valid palindrome. Return 1.
- Base case 2: If *start != *end, immediate mismatch. Return 0.
- Recursive step: Move start forward and end backward.

Example (input):
radar

Expected output:
1

Example (input):
hello

Expected output:
0
*/

#include <stdio.h>

int is_palidrome(char *start, char *end)
{
    if (start > end)
        return 1;
    if (*start != *end)
        return 0;
    return is_palidrome(start + 1, end - 1);
}

int main(void)
{
    char string[100];
    scanf("%s", string);

    char *ptr = string;
    for (int i = 0; *(string + i) != '\0'; i++)
        ptr++;
    ptr--;

    printf("%d", is_palidrome(string, ptr));
    return 0;
}