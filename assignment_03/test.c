#include <stdio.h>
int main()
{
    int n, space, character;
    scanf("%d", &n);
    space = n - 1;
    character = 1;

    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= character; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else 
            {
                printf("#");
            }
        }

        if(i < n)
        {
            character = character + 2;
            space--;
        }
        else 
        {
            character = character - 2;
            space++;
        }
        printf("\n");
    }
    
    return 0;
}