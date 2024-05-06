#include <stdio.h>
#include <string.h>
int main()
{
    char string_one[200], string_two[100];
    scanf("%s %s", string_one, string_two);

    strcat(string_one, string_two);

    printf("%s\n", string_one);

    return 0;
}