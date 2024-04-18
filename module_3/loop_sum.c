#include <stdio.h>
int main()
{
    // int sum = 0;
    // int i;
    // for(i = 0; i <= 5; i++)
    // {
    //     sum += i;
    // }
    // printf("%d", sum);

    int n;
    scanf("%d", &n);
    int sum = 0;
    int i;
    for(i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}