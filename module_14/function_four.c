#include <stdio.h>

void add_two_value(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    printf("%d\n", sum);
}

int main()
{
    add_two_value();

    return 0;
}