#include <stdio.h>
#include <limits.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    long long int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &numbers[i]);
    }

    // sotring the array at ascending order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] < numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // adding max numbers depending on k
    long long int max_sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (numbers[i] > 0)
        {
            max_sum += numbers[i];
        }
    }

    printf("%lld\n", max_sum);

    return 0;
}