#include <stdio.h>
int main()
{
    int number [5];

    // to take value of the array as input 
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &number[i]);
    }

    // to show value of the array as output 
    for (int i = 0; i < 5; i++)
    {
        printf("%d", number[i]);
    }

    return 0;
}