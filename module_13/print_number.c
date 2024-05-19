#include <stdio.h>
int main()
{
    int n, number = 1;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            printf("%d", j);
        }
        number++;
        printf("\n");
    }

    return 0;
}