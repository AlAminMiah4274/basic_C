#include <stdio.h>
int main()
{
    int numbers[5][2];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}