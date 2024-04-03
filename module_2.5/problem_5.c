#include <stdio.h>
int main()
{
    int money;
    scanf("%d", &money);

    if (money >= 10000)
    {
        printf("Gucci Bag\n");

        if(money > 20000)
        {
            printf("gucci Belt");
        }
    }

    if (money >= 5000 && money < 10000)
    {
        printf("Levis Bag\n");
    }

    if(money < 5000)
    {
        printf("Something\n");
    }

    return 0;
}