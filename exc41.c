/*
========================================
Exercise 41
Difficulty: Medium
Topic: File Handling (Writing)
========================================

Write a C program that:

- Reads a single word (string, max 100 chars) from standard input (console).
- Creates (or overwrites) a text file named "output.txt".
- Writes that word into the file.
- Closes the file properly.

Constraints:
- Use `FILE *` variable.
- Use `fopen()` with mode "w" (write).
- Check if the file opened successfully (pointer != NULL).
  - If it fails (NULL), print "Error" and exit.
- Use `fprintf()` to write to the file.
- Use `fclose()` at the end.
- Print "Saved to file." on the console if successful.

Hint:
- Declaration: `FILE *file_ptr;`
- Opening: `file_ptr = fopen("output.txt", "w");`
- Writing: `fprintf(file_ptr, "%s", my_string);`
- Closing: `fclose(file_ptr);`

Example (Console Input):
Gemini

Expected Console Output:
Saved to file.

Expected File Content (output.txt):
Gemini
*/

#include <stdio.h>

int main(void)
{
    char string[100];
    scanf("%s", string);

    FILE *file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("Error");
        return 1;
    }
    fprintf(file, "%s", string);
    printf("Saved to file.");

    fclose(file);
    return 0;
}