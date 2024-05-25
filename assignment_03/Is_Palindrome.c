#include <stdio.h>
#include <string.h>

int is_palindrome(char *string)
{
    int length = strlen(string);

    char previous_string[1001];
    strcpy(previous_string, string);

    int i = 0, j = length - 1;
    while (i < j)
    {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        i++;
        j--;
    }

    int compared = strcmp(previous_string, string);

    if (compared == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char text[1001];
    scanf("%s", text);

    int result = is_palindrome(text);
    if(result)
    {
        printf("Palindrome");
    }
    else 
    {
        printf("Not Palindrome");
    }

    return 0;
}