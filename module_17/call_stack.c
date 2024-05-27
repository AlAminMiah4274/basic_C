#include <stdio.h>

void world(void)
{
    printf("world function start\n");
    printf("world function end\n");
}

void hello(void)
{
    printf("hello function start\n");
    world();
    printf("hello function end\n");
}


int main()
{
    printf("main function start\n");
    hello();
    printf("main function end\n");

    return 0;
}