#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x,max=INT_MIN;
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x>max)
        {
            max=x;
        }
    }
    printf("%d", max);

    return 0;
}

// most small value of integer: INT_MIN
// most large value of integer: INT_MAX