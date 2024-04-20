#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int replacement [n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &replacement[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(replacement[i] > 0)
        {
            replacement[i] = 1;
        }
        if(replacement[i] < 0)
        {
            replacement[i] = 2;
        }

        printf("%d ", replacement[i]);
    }

    return 0;
}