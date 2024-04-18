#include <stdio.h>
int main()
{
    char character;
    scanf("%c", &character);

    if (character >= 'a' && character < 'z')
    {
        int next_character = character + 1;
        printf("%c\n", next_character);
    }
    else if (character == 'z')
    {
        int first_character = character - 25;
        printf("%c\n", first_character);
    }

    return 0;
}