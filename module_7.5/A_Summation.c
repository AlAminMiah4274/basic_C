#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array_sum [n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array_sum[i]);
    }

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array_sum[i];
        if(sum < 0)
        {
            long long int positive_sum = sum * 1;
        }
    }

    printf("%lld\n", sum);

    return 0;
}