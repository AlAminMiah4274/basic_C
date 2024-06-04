#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int jadu_matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &jadu_matrix[i][j]);
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
            if (i == j || i + j == col - 1)
            {
                if (jadu_matrix[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else if (jadu_matrix[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}