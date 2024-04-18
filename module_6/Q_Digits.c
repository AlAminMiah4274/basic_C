#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int t;

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &t);
        do 
        {
            printf("%d ", t % 10);
            t = t / 10;
        }
        while (t != 0);
        printf("\n");
    }
    return 0;
}