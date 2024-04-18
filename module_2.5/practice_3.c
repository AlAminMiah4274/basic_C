#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("It is a even number.");
    }
    else
    {
        printf("It is a odd number.");
    }

    return 0;
}