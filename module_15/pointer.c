#include <stdio.h>
int main()
{
    int number = 45;

    int *address_number = &number;
    printf("%d\n", *address_number);

    *address_number = 103;
    printf("%d\n", *address_number);

    return 0;
}