/*
========================================
Exercise 06
Difficulty: Medium
Topic: Arrays, Loops, Average
========================================

Write a C program that:

- Reads an integer N (1 ≤ N ≤ 100) from standard input.
- Reads N integers and stores them in an array.
- Calculates the **average** of the N numbers.
- Prints the average as a **floating-point number with 2 decimal places**.

Constraints:
- Print ONLY the average, no extra text.
- Use loops to traverse the array.
- Use `%.2f` to format the output.

Example (input):
5
10 20 30 40 50

Expected output:
30.00
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int amount, sum;
    scanf("%d", &amount);

    int *array = malloc(amount * sizeof(int));

    for (int i = 0; i < amount; i++)
        scanf("%d", &array[i]);

    sum = 0;
    for (int i = 0; i < amount; i++)
        sum += array[i];

    float avg = (float)sum / amount;
    printf("%.2f\n", avg);

    free(array);
}