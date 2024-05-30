#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int numbers[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }

    // int specific_row;
    // scanf("%d", &specific_row);

    // for (int i = 0; i < col; i++)
    // {
    //     printf("%d\n", numbers[specific_row][i]);
    // }

    int specific_col;
    scanf("%d\n", specific_col);

    for (int i = 0; i < row; i++)
    {
        printf("%d\n", numbers[i][specific_col]);
    }

    return 0;
}