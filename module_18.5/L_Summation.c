#include <stdio.h>

int sum_numbers(int *array_name, int array_size, int i)
{
    if (i == array_size) return 0;
    int add = sum_numbers(array_name, array_size, i + 1);
    
    return add + array_name[i];
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

    int result = sum_numbers(numbers, n, 0);
    printf("%d\n", result);

    return 0;
}