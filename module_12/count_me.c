#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    int count[2] = {0};
    for (int i = 0; i < n; i++)
    {
        if (number[i] % 2 == 0 && number[i] % 3 == 0)
        {
            count[0]++;
        }
        else if(number[i] % 2 == 0)
        {
            count[0]++;
        }
        else if(number[i] % 3 == 0)
        {
            count[1]++;
        }
    }

    int i = 0, j = 1;
    while(i < j)
    {
        printf("%d %d\n", count[i], count[j]);
        break;
    }

    return 0;
}