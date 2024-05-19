#include <stdio.h>
int main()
{
    int n, star;
    scanf("%d", &n);
    star = n;

    for (int i = n; i > 0; i--)
    {
        for (int j = star; j >= 1; j--)
        {
            printf("* ");
        }
        star--;
        printf("\n");
    }

    return 0;
}