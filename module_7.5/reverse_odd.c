#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int odd_nums[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &odd_nums[i]);
    }

    for (int i = n-1; i >= 0; i--)
    {
        if(i % 2 == 1)
        {
            printf("%d\n", odd_nums[i]);
        }
    }

    return 0;
}

// printf("%d\n", i); ----> index number
// printf("%d\n", odd_nums[i]); -----> value