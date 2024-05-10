#include <stdio.h>
#include <string.h>
int main()
{
    char string_one[100], string_two[100];
    scanf("%s %s", string_one, string_two);

    // int i = 0;
    // while (1)
    // {

    //     if (string_one[i] == '\0' && string_two[i] == '\0')
    //     {
    //         printf("both are same\n\n");
    //         break;
    //     }
    //     else if (string_one[i] == '\0')
    //     {
    //         printf("string one is small\n\n");
    //         break;
    //     }
    //     else if (string_two[i] == '\0')
    //     {
    //         printf("string two is small\n\n");
    //         break;
    //     }

    //     if (string_one[i] == string_two[i])
    //     {
    //         i++;
    //     }
    //     else if (string_one[i] < string_two[i])
    //     {
    //         printf("string one is small\n\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("string two is small\n\n");
    //         break;
    //     }
    // }

    int comparison_value = strcmp(string_one, string_two);
    
    if (comparison_value > 0)
    {
        printf("string two is small\n");
    }
    else if (comparison_value < 0)
    {
        printf("string one is small\n");
    }
    else 
    {
        printf("both are same\n");
    }

    return 0;
}