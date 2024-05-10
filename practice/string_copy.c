#include <stdio.h>
#include <string.h>
int main()
{
    char string_one[100], string_two[100];
    scanf("%s %s", string_one, string_two);

    // for (int i = 0; i < strlen(string_one); i++)
    // {
    //     string_one[i] = string_two[i];
    // }

    strcpy(string_one, string_two);

    printf("%s %s\n", string_one, string_two);

    return 0;
}