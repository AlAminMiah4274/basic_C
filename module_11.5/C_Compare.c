#include <stdio.h>
#include <string.h>
int main()
{
    char string_one[21], string_two[21];
    scanf("%s %s", string_one, string_two);

    int i = 0;
    while (1)
    {
        if (string_one[i] == '\0' && string_two[i] == '\0')
        {
            printf("%s\n", string_one);
            break;
        }
        else if (string_one[i] == '\0')
        {
            printf("%s\n", string_one);
            break;
        }
        else if(string_two[i] == '\0')
        {
            printf("%s\n", string_two);
            break;
        }

        if (string_one[i] == string_two[i])
        {
            i++;
        }
        else if (string_one[i] < string_two[i])
        {
            printf("%s\n", string_one);
            break;
        }
        else 
        {
            printf("%s\n", string_two);
            break;
        }
    }

    return 0;
}