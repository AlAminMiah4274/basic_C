#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];
    int count_min = 1;

    for (int i = 1; i < n; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
            count_min = 1;
        }
        else if (numbers[i] == min)
        {
            count_min++;
        }
    }

    if (count_min % 2 != 0)
    {
        printf("Lucky\n");
    }
    else 
    {
        printf("Unlucky\n");
    }

    return 0;
}