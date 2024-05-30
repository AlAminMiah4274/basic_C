#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int total_elements = row * col;
    int numbers[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }

    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (numbers[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (total_elements == count)
    {
        printf("Zero Matrix\n");
    }
    else
    {
        printf("Not Zero Matrix\n");
    }

    return 0;
}