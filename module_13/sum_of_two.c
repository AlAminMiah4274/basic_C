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

    int x;
    scanf("%d", &x);
    int existence = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (number[i] + number[j] == x)
            {
                existence = 1;
            }
        }
    }

    if (existence)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}