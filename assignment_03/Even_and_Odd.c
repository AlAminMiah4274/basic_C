#include <stdio.h>

void odd_even(void)
{
    int n;
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }

    printf("%d %d", even, odd);
}

int main()
{
    odd_even();

    return 0;
}