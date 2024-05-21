#include <stdio.h>

int add_two_value()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int sum = num1 + num2;
    
    return sum;
}

int main()
{
    printf("%d\n", add_two_value());

    int value = add_two_value();
    printf("%d\n", value);

    return 0;
}