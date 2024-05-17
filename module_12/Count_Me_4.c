#include <stdio.h>
#include <string.h>
int main()
{
    char alphabet[10001];
    scanf("%s", alphabet);

    int counting[26] = {0};
    for (int i = 0; i < strlen(alphabet); i++)
    {
        int index_counting = alphabet[i] - 'a';
        counting[index_counting]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (counting[i] != 0)
        {
            printf("%c - %d\n", i + 'a', counting[i]);
        }
    }

    return 0;
}