#include <stdio.h>

void add_two_value(int num1, int num2)
{
    int sum = num1 + num2;
    printf("%d\n", sum);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    add_two_value(a, b);

    return 0;
}