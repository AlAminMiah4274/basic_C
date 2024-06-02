#include <stdio.h>

long long int factorial_print(int num)
{
    if(num == 0)
    {
        return 1;
    }

    long long int value = factorial_print(num - 1);

    return value * num;
}

int main()
{
    int number;
    scanf("%d", &number);

    long long int result = factorial_print(number);
    printf("%lld", result);

    return 0;
}