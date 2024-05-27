#include <stdio.h>

void numbers_print(int i)
{
    if (i == 6) return;
    printf("%d\n", i);
    numbers_print(i + 1);
}

int main()
{
    numbers_print(1);

    return 0;
}