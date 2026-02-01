/*
========================================
Exercise 32
Difficulty: Medium+
Topic: Strings, Pointers, Functions
========================================

Write a C program that:

- Reads two strings from standard input (max 50 chars each).
- Uses a function to **concatenate** (append) the second string to the end of the first string.
- The function must receive:
    - a pointer to the destination string (first string)
    - a pointer to the source string (second string)
- The operation must be done using **only pointer arithmetic**.

Rules:
- Do NOT use array indexing inside the function.
- Do NOT use built-in helper functions (no strcat, strlen, etc.).
- Assume the first string has enough memory allocated to hold both strings.
- Print the resulting concatenated string followed by a newline.

Hint:
1. Move the destination pointer until you find the null terminator ('\0').
2. From that position, start copying the source string character by character.
3. Don't forget to add the null terminator at the very end of the new string!

Example (input):
Hello
World

Expected output:
HelloWorld
*/

#include <stdio.h>
#include <stdlib.h>

void concatenate(char *ptr1, char *ptr2)
{

    while (*ptr1)
        ptr1++;
    while (*ptr2)
    {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0';
}

int main(void)
{
    char string1[100];
    char string2[50];

    scanf("%s", string1);
    scanf("%s", string2);

    concatenate(string1, string2);
    printf("%s\n", string1);
    return 0;
}