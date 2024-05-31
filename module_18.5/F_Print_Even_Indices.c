#include <stdio.h>

void even_index(int *array_name, int array_size, int i)
{
    if (i < 0)
        return;
    if (i % 2 == 0)
    {
        printf("%d ", array_name[i]);
    }
    even_index(array_name, array_size, i - 1);
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

    even_index(numbers, n, n - 1);

    return 0;
}