#include <stdio.h>
#include <string.h>
int main()
{
    char conversion[100001];
    scanf("%s", conversion);

    for(int i = 0; i < strlen(conversion); i++)
    {
        if(conversion[i] == 'a' && conversion[i] == 'z')
        {
            int capital = conversion[i] - 32;
            conversion[i] = capital;
        }
        else if(conversion[i] == 'A' && conversion[i] == 'Z')
        {
            int small = conversion[i] + 32;
            conversion[i] = small;
        }
    }

    printf("%s\n", conversion);

    return 0;
}