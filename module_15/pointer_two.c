#include <stdio.h>
int main()
{
    double number = 4.61;
    
    double *address_number = &number;
    printf("%0.2lf\n", *address_number);

    *address_number = 4.92;
    printf("%0.2lf\n", *address_number);

    return 0;
}