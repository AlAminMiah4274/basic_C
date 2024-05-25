#include <stdio.h>
int main()
{
    int n, space, number;
    scanf("%d", &n);
    space = n - 1;
    number = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = number; j >= 1; j--)
        {
            printf("%d", j);
        }
        space--;
        number++;
        printf("\n");
    }

    return 0;
}