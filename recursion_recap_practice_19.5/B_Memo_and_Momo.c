#include <stdio.h>
int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if (a % k == 0 && b % k == 0)
    {
        printf("Both\n");
    }
    else if (a % k != 0 && b % k != 0)
    {
        printf("No One\n");
    }

    if (a % k == 0 && b % k != 0)
    {
        printf("Memo\n");
    }
    if(b % k == 0 && a % k != 0)
    {
        printf("Momo\n");
    }

    return 0;
}