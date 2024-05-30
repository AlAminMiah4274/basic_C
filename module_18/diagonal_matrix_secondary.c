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

    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                continue;
            }
            if (numbers[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag)
    {
        printf("Diagonal matrix\n");
    }
    else
    {
        printf("Not diagonal matrix\n");
    }

    return 0;
}