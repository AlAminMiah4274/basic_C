#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);

    int replace_MinMax[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &replace_MinMax[i]);
    }

    int max = INT_MIN, min = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(replace_MinMax[i] > max)
        {
            max = replace_MinMax[i];
        }
        if(replace_MinMax[i] < min)
        {
            min = replace_MinMax[i];
        }
    }

    int temp = max;
    

    printf("%d %d\n", max, min);

    return 0;
}