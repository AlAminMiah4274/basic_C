#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);

    for (int i = 1; i <= test_case; i++)
    {
        int number;
        scanf("%d", &number);

        while (number != 0)
        {
            // int digit = number % 10;
            // printf("%d ", digit);

            printf("%d ", number % 10);
            number /= 10;
        }
        printf("\n");
    }

    return 0;
}

/*
print digits reversely separated by space:

3
2145
56
123547
-----------
5 4 1 2
6 5
7 4 5 3 2 1
*/