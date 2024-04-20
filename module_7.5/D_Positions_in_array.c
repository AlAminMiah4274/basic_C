#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int position_value [n];

    for(int i =0; i < n; i++)
    {
        scanf("%d", &position_value[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(position_value[i] <= 10)
        {
            printf("A[%d] = %d\n", i, position_value[i]);
        }
    }

    return 0;
}