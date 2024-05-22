#include <stdio.h>

int character_to_ascii(char letter)
{
    int value_letter = letter;
    
    return value_letter;
}

int main()
{
    char alphabet;
    scanf("%c", &alphabet);

    int result = character_to_ascii(alphabet);
    printf("%d\n", result);

    return 0;
}