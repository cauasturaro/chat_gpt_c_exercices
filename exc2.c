/*
========================================
Exercise 02
Difficulty: Easy
Topic: Conditionals (if / else)
========================================

Write a C program that:

- Reads one integer from standard input.
- Prints:
  - "POSITIVE" if the number is greater than zero
  - "NEGATIVE" if the number is less than zero
  - "ZERO" if the number is equal to zero

Constraints:
- Print the result in UPPERCASE.
- Print ONLY the word, with no extra text or spaces.
- The output must end with a newline.

Example (input):
-5

Expected output:
NEGATIVE
*/

#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);

    if (value > 0)
        printf("POSITIVE\n");
    else if (value < 0)
        printf("NEGATIVE\n");
    else
        printf("ZERO\n");
}