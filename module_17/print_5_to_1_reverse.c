#include <stdio.h>

void reverse_print(int i)
{
    if (i == 6) return;
    reverse_print(i + 1);
    printf("%d\n", i);
}

int main()
{
    reverse_print(3);

    return 0;
}