#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);

    for (int i = 1; i <= test_case; i++)
    {
        int number;
        scanf("%d", &number);

        // to increase and decrease the divisor value
        int divisor = 1;
        while (number / divisor >= 10)
        {
            divisor *= 10;
        }

        // to print required value
        do
        {
            printf("%d ", number / divisor % 10);
            divisor /= 10;
        } while (divisor != 0);

        printf("\n");
    }

    return 0;
}

/*
print digits with space normal orderly:
3
1234
654
5897
----------
1 2 3 4
6 5 4
5 8 9 7
*/