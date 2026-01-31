/*
========================================
Exercise 16
Difficulty: Medium+
Topic: Strings, Pointers, Functions
========================================

Write a C program that:

- Reads a string (maximum 100 characters).
- Uses a function to count how many vowels exist in the string.
- The function must receive only a pointer to the string.
- The string must be traversed using only pointer arithmetic.

Rules:
- Do NOT use array indexing.
- Do NOT use string library functions (strlen, strcmp, etc.).
- Consider only lowercase vowels: a, e, i, o, u.
- The string is case-sensitive.
- Print ONLY the number of vowels, followed by a newline.

Example (input):
programming

Expected output:
3
*/

#include <stdio.h>

int lower_vowels(char *ptr)
{
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') // could be made with another loop comparing two strings (the ptr string and vowels string("aeiou"))
            count++;
        ptr++;
    }
    return count;
}

int main(void)
{
    char string[100];
    scanf("%s", string);

    char *ptr = string;
    printf("%d\n", lower_vowels(ptr));
}