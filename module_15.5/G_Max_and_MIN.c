#include <stdio.h>
#include <limits.h>

void min_max_print(int array_name[], int array_size)
{
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < array_size; i++)
    {
        if (array_name[i] < min)
        {
            min = array_name[i];
        }
        if (array_name[i] > max)
        {
            max = array_name[i];
        }
    }

    printf("%d %d", min, max);
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

    min_max_print(numbers, n);

    return 0;
}