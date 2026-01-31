/*
========================================
Exercise 20
Difficulty: Medium+
Topic: Strings, Pointers, Functions
========================================

Write a C program that:

- Reads a string (maximum 100 characters).
- Uses a function to reverse the string **in place**.
- The function must receive only a pointer to the string.
- The string must be reversed using **only pointer arithmetic**.

Rules:
- Do NOT use array indexing.
- Do NOT use string library functions (strlen, strcpy, etc.).
- Do NOT use auxiliary arrays.
- The reversal must modify the original string.
- Print the reversed string followed by a newline.

Example (input):
hello

Expected output:
olleh
*/

#include <stdio.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_string(char *ptr)
{
    // left & right pointers, swap pos
    char *right = ptr;
    char *left = ptr;

    while (*right)
        right++;

    right--;

    while (left < right)
    {
        swap(left, right);
        left++;
        right--;
    }
}

int main(void)
{
    char string[100];
    scanf("%s", string);

    char *ptr = string;

    reverse_string(ptr);
    printf("%s", string);
}