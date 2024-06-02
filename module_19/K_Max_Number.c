#include <stdio.h>
#include <limits.h>

int find_max_number(int *array, int size, int i)
{
    if (i == size)
    {
        return INT_MIN;
    }

    // int max = INT_MIN;
    // if (array[i] > max)
    // {
    //     max = array[i];
    // }

    int value = find_max_number(array, size, i + 1);

    if (array[i] > value)
    {
        return array[i];
    }
    else 
    {
        return value;
    }
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

    int result = find_max_number(numbers, n, 0);
    printf("%d", result);
    
    return 0;
}