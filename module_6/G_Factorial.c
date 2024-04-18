#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int n;
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        int multiplication = 1;

        for (int j = 1; j <= n; j++)
        {
            multiplication *= j;
        }
        printf("%d\n", multiplication);
    }

    return 0;
}