#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
        if(i == 5)
        {
            break;
        }
    }
}