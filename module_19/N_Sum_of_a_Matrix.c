#include <stdio.h>
int main()
{
    int R, C;
    scanf("%d %d", &R, &C);

    int array_a[R][C], array_b[R][C], array_c[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &array_a[i][j]);
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &array_b[i][j]);
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            array_c[i][j] = array_a[i][j] + array_b[i][j];
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d ", array_c[i][j]);
        }
        printf("\n");
    }

    return 0;
}