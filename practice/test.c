#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int i;
    for (i = 1; i <= x; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}