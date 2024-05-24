#include <stdio.h>

int addition(int a, int b)
{
    int sum = a + b;

    return sum;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int result = addition(x, y);
    printf("%d\n", result);

    return 0;
}