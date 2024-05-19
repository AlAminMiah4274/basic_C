#include <stdio.h>
int main()
{
    int n, number;
    scanf("%d", &n);
    number = n;

    for (int i = n; i > 0; i--)
    {
        for (int j = number; j >= 1; j--)
        {
            printf("%d", j);
        }
        number--;
        printf("\n");
    }

    return 0;
}