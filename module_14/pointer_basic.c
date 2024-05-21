#include <stdio.h>
int main()
{
    int number = 25;

    int *address_number = &number;
    printf("%d\n", *address_number);

    *address_number = 102;

    printf("%d\n", number);

    return 0;
}