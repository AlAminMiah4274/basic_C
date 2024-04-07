#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    
    if (x / 1000 % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}

/*
to find out the first digit of a number divide by 10, 100, 1000 or 10000
if the number is 2 digit --> 10, 3 digit --> 100, 4 digit --> 1000 ....
*/