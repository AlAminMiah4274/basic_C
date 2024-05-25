#include <stdio.h>

int count_before_one(int *array_name, int array_size)
{
    int count = 0;
    for (int i = 0; i < array_size; i++)
    {
        if (array_name[i] == 1)
        {
            break;
        }
        else if (array_name[i] != 1)
        {
            count++;
        }
    }

    return count;
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

    int result = count_before_one(numbers, n);
    printf("%d\n", result);

    return 0;
}