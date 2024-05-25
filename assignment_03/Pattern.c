#include <stdio.h>
int main()
{
    int n, space, hash, hyphen;
    scanf("%d", &n);
    space = n - 1;
    hash = 1;
    hyphen = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        if (i % 2 != 0)
        {
            for (int j = 1; j <= hash; j++)
            {
                printf("#");
            }
            space--;
            hash = hash + 4;
        }
        else
        {
            for (int j = 1; j <= hyphen; j++)
            {
                printf("-");
            }
            space--;
            hyphen = hyphen + 4;
        }
        printf("\n");
    }

    return 0;
}