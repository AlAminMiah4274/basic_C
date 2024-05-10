#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int digit[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%1d", &digit[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += digit[i];
    }

    print("%d\n", sum);

    return 0;
}