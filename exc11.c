/*
========================================
Exercise 11
Difficulty: Medium
Topic: Strings, Pointers
========================================

Write a C program that:

- Reads a string (maximum 100 characters) from standard input.
- Counts the number of **uppercase letters** in the string using a pointer.
- Prints ONLY the count, followed by a newline.

Constraints:
- Do NOT use array indexing to traverse the string; use only pointers.
- Consider only letters 'A' to 'Z' as uppercase.
- Do not count any other characters.
- Print ONLY the numeric result.

Example (input):
HelloWorld

Expected output:
2
*/

#include <stdio.h>

int main(void)
{
    char word[100];
    scanf("%s", word);
    char *ptr = word;

    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr >= 'A' && *ptr <= 'Z')
        {
            count++;
        }
        ptr++;
    }

    printf("%d\n", count);
}