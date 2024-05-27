#include <stdio.h>

void array_with_recursion(int *array_name, int array_size, int i)
{
    // base case:
    if (i == array_size) return;
    printf("%d\n", array_name[i]);
    array_with_recursion(array_name, array_size, i + 1);
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

    array_with_recursion(numbers, n, 0);

    return 0;
}