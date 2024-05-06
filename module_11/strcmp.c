#include <stdio.h>
#include <string.h>
int main()
{
    char string_one[100], string_two[100];
    scanf("%s %s", string_one, string_two);

    int value_compared_string = strcmp(string_one, string_two);

    if(value_compared_string < 0)
    {
        printf("string one is small\n");
    }
    else if (value_compared_string > 0)
    {
        printf("string two is small\n");
    }
    else 
    {
        printf("they are same\n");
    }

    return 0;
}