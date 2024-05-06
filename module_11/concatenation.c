#include <stdio.h>
#include <string.h>
int main()
{
    char string_one[100], string_two[100];
    scanf("%s %s", string_one, string_two);

    int length_string_one = strlen(string_one);
    for(int i = 0; i <= strlen(string_two); i++)
    {
        string_one[length_string_one] = string_two[i];
        length_string_one++;
    }

    // to add null value in a string
    // string_one[12] = '\0';

    printf("%s\n", string_one);

    return 0;
}