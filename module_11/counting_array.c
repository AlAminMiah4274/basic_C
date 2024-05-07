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

    int counting[11] = {0};
    for(int i = 0; i < n; i++)
    {
        counting[number[i]]++;
    }

    for(int i = 0; i < 11; i++)
    {
        if (counting[i] != 0)
        {
            printf("%d %d\n", i, counting[i]);
        }
    }

    return 0;
}