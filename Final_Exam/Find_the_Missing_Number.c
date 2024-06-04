#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long int total = A * B * C;
        long long int missing_num = M / total;

        if (M % total == 0)
        {
            printf("%lld\n", missing_num);
        }
        else 
        {
            printf("-1\n");
        }
    }

    return 0;
}