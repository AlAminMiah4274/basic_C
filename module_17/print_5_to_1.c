#include <stdio.h>

void numbers_print(int i)
{
    if (i == 0) return;
    printf("%d\n", i);
    numbers_print(i - 1);
}

int main()
{
    numbers_print(5);

    return 0;
}