#include <stdio.h>

int small_to_capital(char letter)
{
    int capital = letter - 32;

    return capital;
}

int main()
{
    char small_letter;
    scanf("%c", &small_letter);
    int result = small_to_capital(small_letter);

    printf("%c\n", result);

    return 0;
}