#include <stdio.h>

int count_odd(int *array_name, int array_size)
{
    int odd = 0;
    for (int i = 0; i < array_size; i++)
    {
        if (array_name[i] % 2 != 0)
        {
            odd++;
        }
    }

    return odd;
}

int main()
{
    int n;
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int result = count_odd(numbers, n);
    printf("%d\n", result);

    return 0;
}