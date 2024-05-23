#include <stdio.h>

void call_by_reference(int *pointer)
{
    *pointer = 300;
}

int main()
{
    int digit = 105;
    printf("before fucntion call: %d\n", digit);

    call_by_reference(&digit);

    printf("after function call: %d\n", digit);

    return 0;
}