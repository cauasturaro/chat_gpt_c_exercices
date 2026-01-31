/*
========================================
Exercise 08
Difficulty: Medium
Topic: Strings, Arrays
========================================

Write a C program that:

- Reads a single word (maximum 100 characters) from standard input.
- Counts and prints the number of **vowels** in the word.

Constraints:
- Consider only lowercase and uppercase vowels: a, e, i, o, u (case-insensitive).
- Print ONLY the number of vowels, followed by a newline.
- Do not count any other characters.
- Use arrays and loops to traverse the string.

Example (input):
Programming

Expected output:
3
*/

#include <stdio.h>

int main(void)
{
    int count = 0;
    char word[100];
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    scanf("%s", &word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (word[i] == vowels[j])
            {
                count++;
                break;
            }
        }
    }

    printf("%d\n", count);
}
