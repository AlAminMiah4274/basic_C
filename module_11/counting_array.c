#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    int number_count[21] = {0};
    for (int i = 0; i < n; i++)
    {
        number_count[number[i]]++;
    }

    for (int i = 0; i < 21; i++)
    {
        if (number_count[i] != 0)
        {
            printf("%d - %d\n", i, number_count[i]);
        }
    }

    return 0;
}