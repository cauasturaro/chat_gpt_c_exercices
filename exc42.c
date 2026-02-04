/*
========================================
Exercise 42
Difficulty: Medium
Topic: File Handling (Reading)
========================================

Write a C program that:

- Opens the file "output.txt" (created in the previous exercise).
- Reads the single word stored in it.
- Prints that word to the standard console.
- Closes the file properly.

Constraints:
- Use `FILE *` variable.
- Use `fopen()` with mode "r" (read).
- Check if the file opened successfully.
  - If `file == NULL`, print "File not found" and exit.
- Use `fscanf()` to read from the file into a string variable.
- Print "Read from file: [word]" to the console.

Hint:
- Mode: `fopen("filename", "r")`
- Reading: `fscanf(file_ptr, "%s", my_buffer_string);`
  (It works exactly like scanf, but reads from the file stream instead of the keyboard).

Example (Assuming output.txt contains "Gemini"):

Expected Console Output:
Read from file: Gemini
*/

#include <stdio.h>

int main(void)
{
    FILE *file = fopen("output.txt", "r");
    if (file == NULL)
    {
        printf("Error");
        return 1;
    }

    char word[100];
    fscanf(file, "%s", word);

    printf("%s", word);

    fclose(file);
    return 0;
}