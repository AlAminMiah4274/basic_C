#include <stdio.h>

int capital_to_small(char letter)
{
    int small = letter + 32;

    return small;
}

int main()
{
    char alphabet;
    scanf("%c", &alphabet);
    int result = capital_to_small(alphabet);

    printf("%c\n", result);

    return 0;
}