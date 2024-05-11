#include <stdio.h>
#include <string.h>
int main()
{
    char letter;
    int counting[26] = {0};
    while (scanf("%c", &letter) != EOF)
    {
        counting[letter - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (counting[i] != 0)
        {
            printf("%c : %d\n", i + 'a', counting[i]);
        }
    }

    return 0;
}