#include <stdio.h>
int main()
{
    int n, space, star;
    scanf("%d", &n);
    space = n - 1;
    star = 1;

    for (int i = 1; i <= (2 * n); i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        if (i < n)
        {
            space--;
            star = star + 2;
        }
        else if (i > n)
        {
            space++;
            star = star - 2;
        }
        printf("\n");
    }

    return 0;
}