#include <stdio.h>

void call_by_value(int x)
{
    x = 500;

    printf("address of created function: %d\n", x);
}

int main()
{
    int x = 5;
    printf("address of main function: %d\n", x);
    call_by_value(x);

    return 0;
}