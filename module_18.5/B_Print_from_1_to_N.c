#include <stdio.h>

void numbers_print(int i)
{
    if (i == 0) return;
    numbers_print(i - 1);
    printf("%d\n", i);
}

int main()
{
    int n;
    scanf("%d", &n);

    numbers_print(n);

    return 0;
}