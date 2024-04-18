#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    int even=0,odd=0,positive=0,negative=0;

    // declared loop to take several values as input here
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x%2==0)
        {
            even++;
        }
        else if(x%2==1 || x%2==-1)
        {
            odd++;
        }
        if(x>0)
        {
            positive++;
        }
        else if(x<0)
        {
            negative++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositve: %d\nNegative: %d\n", even,odd,positive,negative);

    return 0;
}