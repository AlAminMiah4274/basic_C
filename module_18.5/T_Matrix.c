#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int diagonals[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &diagonals[i][j]);
        }
    }

    int primary = 0, secondary = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary += diagonals[i][j];
            }
            if (i + j == n - 1)
            {
                secondary += diagonals[i][j];
            }
        }
    }

    int sum = primary - secondary;
    int absolute_difference = abs(sum);

    printf("%d\n", absolute_difference);

    return 0;
}