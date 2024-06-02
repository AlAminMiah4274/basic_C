#include <stdio.h>
#include <string.h>

int vowel_count(char *sentence, int i)
{
    if (sentence[i] == '\0') return 0;

    int vowel = 0;
    if (sentence[i] == 'A' || sentence[i] == 'a' || sentence[i] == 'E' || sentence[i] == 'e' || sentence[i] == 'I' || sentence[i] == 'i' || sentence[i] == 'O' || sentence[i] == 'o' || sentence[i] == 'U' || sentence[i] == 'u')
    {
        vowel++;
    }
    int count = vowel_count(sentence, i + 1);

    return vowel + count;

}

int main()
{
    char text[201];
    fgets(text, 201, stdin);

    int result = vowel_count(text, 0);
    printf("%d", result);

    return 0;
}