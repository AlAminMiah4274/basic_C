#include <stdio.h>

void print_digits_with_space(int num)
{
    if (num == 0) return; // base case 
    int digit = num % 10;
    print_digits_with_space(num / 10);
    printf("%d ", digit);
}

int main()
{
    int test_case;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++)
    {
        int number;
        scanf("%d", &number);

        print_digits_with_space(number);

        // corner case 
        if (number == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}