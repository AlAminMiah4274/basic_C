#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sum[i]);
    }

    int sum_positive = 0, sum_negative=0;
    for (int i = 0; i < n; i++)
    {
        if(sum[i] > 0)
        {
            sum_positive += sum[i];
        }
        else
        {
            sum_negative += sum[i];
        }
    }
    printf("%d %d\n", sum_positive, sum_negative);

    return 0;
}