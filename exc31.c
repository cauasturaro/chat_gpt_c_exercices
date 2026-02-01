/*
========================================
Exercise 31
Difficulty: Medium+
Topic: Strings, Pointers, Functions
========================================

Write a C program that:

- Reads two strings from standard input (one per line, max 100 chars each).
- Uses a function to **compare the two strings** lexicographically.
- The function must receive:
    - a pointer to the first string
    - a pointer to the second string
- The strings must be traversed using **only pointer arithmetic** inside the function.

Rules:
- Do NOT use array indexing inside the function (e.g., s[i]).
- Do NOT use built-in helper functions (no strcmp, strncmp, etc.).
- The function should return:
    -  0 : if the strings are identical.
    -  1 : if the first non-matching character in the first string is greater than the second string (ASCII).
    - -1 : if the first non-matching character in the first string is smaller than the second string (ASCII).
- Print ONLY the result number (-1, 0, or 1), followed by a newline.

Hint:
- You need to iterate while both pointers point to valid characters and check if they are equal.
- Don't forget to handle strings of different lengths (e.g., "apple" vs "applepie").

Example (input):
hello
hello

Expected output:
0

Example (input):
apple
banana

Expected output:
-1

Example (input):
banana
apple

Expected output:
1
*/

#include <stdio.h>

int compareStrings(char *ptr1, char *ptr2)
{
    int answer;

    while (*ptr1 && *ptr2)
    {
        if (*ptr1 != *ptr2 && *ptr1 < *ptr2)
            return -1;
        if (*ptr1 != *ptr2)
            return 1;

        ptr1++;
        ptr2++;
    }

    if (!*ptr1 && *ptr2 || *ptr1 && !*ptr2)
        return 1;

    return 0;
}

int main(void)
{
    char strings[2][100];
    scanf("%s", strings[0]);
    scanf("%s", strings[1]);

    char *ptr = strings[0];
    char *ptr2 = strings[1];

    printf("%d\n", compareStrings(ptr, ptr2));
    return 0;
}
