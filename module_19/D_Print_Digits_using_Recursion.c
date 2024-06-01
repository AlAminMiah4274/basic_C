#include <stdio.h>

void digit_with_space(int num)
{
    int digit = num % 10;
    digit_with_space(num / 10);
}

int main()
{
    int test_case;
    scanf("%d", &test_case);

    for (int i = 1; i <= test_case; i++)
    {
        int number;
        scanf("%d", &number);
        digit_with_space(number);
    }

    return 0;
}