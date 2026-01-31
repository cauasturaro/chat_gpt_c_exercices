/*
========================================
Exercise 15
Difficulty: Medium
Topic: Strings, Functions, Pointers
========================================

Write a C program that:

- Reads a string (maximum 100 characters).
- Uses a function to determine if the string is a **palindrome**.
- The function must receive a pointer to the string.
- The check must be done using **only pointer arithmetic**.
- Prints:
    1  → if the string IS a palindrome
    0  → if the string is NOT a palindrome

Constraints:
- Do NOT use array indexing inside the function.
- Do NOT use string library functions (strlen, strcmp, etc).
- Consider the string exactly as given (case-sensitive).
- Print ONLY the result number, followed by a newline.

Definition:
A palindrome is a string that reads the same forward and backward.

Example (input):
radar

Expected output:
1

Example (input):
Hello

Expected output:
0
*/

#include <stdio.h>

int is_palindrome(char string[])
{
    char *right = string;
    char *left = string;

    while (*(right + 1) != '\0')
        right++;

    while (left < right)
    {
        if (*left != *right)
        {
            return 0;
        }
        right--;
        left++;
    }

    return 1;
}

int main(void)
{
    char string[100];
    scanf("%s", string);

    printf("%d\n", is_palindrome(string));
}