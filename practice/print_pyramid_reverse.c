#include <stdio.h>
int main()
{
    int n, space, star;
    scanf("%d", &n);
    space = 0;
    star = n * 2 - 1;

    for (int i = n; i > 0; i--)
    {
        for (int j = space; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = star; j >= 1; j--)
        {
            printf("*");
        }
        space++;
        star = star - 2;
        printf("\n");
    }

    return 0;
}