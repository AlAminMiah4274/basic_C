#include <stdio.h>
int main()
{
    int n, reversed_number = 0, remainder;
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    printf("%d", reversed_number);

    return 0;
}