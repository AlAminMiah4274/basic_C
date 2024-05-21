#include <stdio.h>

int earth = 11;

void scope_function(void)
{
    printf("Address of earth: %p\n", &earth);
}

int main()
{
    int n = 1000;

    scope_function();
    printf("Address of earth (main): %p\n", &earth);

    return 0;
}