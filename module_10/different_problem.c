#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++)
    {
        char too_long[101];
        scanf("%s", too_long);

        int length = strlen(too_long);

        if(length > 10)
        {
            printf("%c%d%c\n", too_long[0], length - 2, too_long[length - 1]);
        }
        else
        {
            printf("%s\n", too_long);
        }
    }

    return 0;
}