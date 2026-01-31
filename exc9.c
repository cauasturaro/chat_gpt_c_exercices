/*
========================================
Exercise 09
Difficulty: Medium
Topic: 2D Arrays (Matrices)
========================================

Write a C program that:

- Reads two integers R and C (1 ≤ R, C ≤ 10) from standard input representing the number of rows and columns of a matrix.
- Reads R × C integers to fill the matrix.
- Computes and prints the **sum of each row**, one sum per line.

Constraints:
- Print ONLY the row sums, each on a separate line.
- Use loops to traverse the matrix.
- Do not use any built-in matrix libraries.

Example (input):
2 3
1 2 3
4 5 6

Expected output:
6
15
*/

#include <stdio.h>

int main(void)
{
    int r, c; // R <= 1; C <= 10
    scanf("%d %d", &r, &c);
    int matrix[r][c];

    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("%d\n", sum);
        sum = 0;
    }
}