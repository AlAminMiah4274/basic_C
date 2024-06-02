#include <stdio.h>

int vowel_count(char *text, int i)
{
    if (text[i] == '\0')
    {
        return 0;
    }

    int count = vowel_count(text, i + 1);
    
    if (text[i] >= 'A' && text[i] <= 'Z')
    {
        text[i] = text[i] + 32;
    }

    if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    char sentence[201];
    fgets(sentence, 201, stdin);

    int result = vowel_count(sentence, 0);
    printf("%d", result);

    return 0;
}