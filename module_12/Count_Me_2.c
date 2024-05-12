#include <stdio.h>
#include <string.h>
int main()
{
    char consonant[100001];
    scanf("%s", consonant);

    int count_consonant;
    for (int i = 0; i < strlen(consonant); i++)
    {
        if (consonant[i] != 'a' && consonant[i] != 'e' && consonant[i] != 'i' && consonant[i] != 'o' && consonant[i] != 'u')
        {
            count_consonant++;
        }
    }

    printf("%d\n", count_consonant);

    return 0;
}