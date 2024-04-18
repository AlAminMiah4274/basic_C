#include <stdio.h>
int main()
{
    int n, i;

    for (n = 1; n <= 20; n++)
    {
        int sum = 0;
        
        for (i = 1; i <= 10; i++)
        {
            sum += n;
            printf("%d X %d = %d\n", n, i, sum);
        }
    }

    return 0;
}

// multiplication of 1 to 20