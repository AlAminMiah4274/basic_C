#include <stdio.h>

void numbers_print(int i)
{
    if (i == 0)
        return;

    if (i == 1)
    {
        printf(" ");
    }
    printf("%d", i);

    numbers_print(i - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    numbers_print(n);

    return 0;
}