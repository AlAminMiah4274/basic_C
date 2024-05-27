#include <stdio.h>

void fun(void)
{
    printf("fun");
    fun();
}

int main()
{
    fun();

    return 0;
}