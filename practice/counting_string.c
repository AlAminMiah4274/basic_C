#include <stdio.h>
#include <string.h>
int main()
{
    char text[100];
    scanf("%s", text);

    int counting[26] = {0};
    for (int i = 0; i < strlen(text); i++)
    {
        int value = text[i] - 'a';
        counting[value]++;
    }

    for (int i = 0; i < strlen(text); i++)
    {
        int value = text[i] - 'a';
        if (counting[value] != 0)
        {
            printf("%c - %d\n", text[i], counting[value]);
        }
        counting[value] = 0;
    }

    return 0;
}