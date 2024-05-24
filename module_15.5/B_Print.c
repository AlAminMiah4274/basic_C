#include <stdio.h>

void numbers_print(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if(i > 1)
        {
            printf(" ");
        }

        printf("%d", i);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    numbers_print(n);

    return 0;
}