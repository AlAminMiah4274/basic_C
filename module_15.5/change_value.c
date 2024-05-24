#include <stdio.h>

void change_it(int *array_name, int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        if(i == array_size - 1)
        {
            array_name[i] = 100;
        }
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

    change_it(numbers, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}