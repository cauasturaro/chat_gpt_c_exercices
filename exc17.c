/*
========================================
Exercise 17
Difficulty: Medium+
Topic: Strings, Pointers, Functions
========================================

Write a C program that:

- Reads a string (maximum 100 characters).
- Uses a function to count how many words exist in the string.
- The function must receive only a pointer to the string.
- The string must be traversed using only pointer arithmetic.

Rules:
- Do NOT use array indexing.
- Do NOT use string library functions (strlen, strtok, etc.).
- A word is defined as a sequence of non-space characters.
- Words are separated by one or more spaces.
- The string may start or end with spaces.
- Print ONLY the number of words, followed by a newline.

Example (input):
hello world from c

Expected output:
4

Example (input):
   pointer   arithmetic is  fun

Expected output:
4
*/

#include <stdio.h>

int how_many_words(char *ptr)
{
    // if space -> jump
    // set it_counts to 1
    // if letter and it_counts == 1 -> it_counts == 0 counter++;

    int it_counts = 1;
    int counter = 0;

    while (*ptr)
    {
        if (*ptr == ' ')
            it_counts = 1;

        if (it_counts && *ptr != ' ')
        {
            it_counts = 0;
            counter++;
        }

        ptr++;
    }

    return counter;
}

int main(void)
{
    char string[100];
    fgets(string, 100, stdin);

    char *ptr = string;

    printf("%d\n", how_many_words(ptr));
}
