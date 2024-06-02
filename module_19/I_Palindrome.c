#include <stdio.h>
#include <string.h>

// int is_palindrome(char *text, int i)
// {
//     char previous_string[1001];
//     strcpy(previous_string, text);

//     int index_i = 0, j = strlen(text) - 1;
//     while (index_i < j)
//     {
//         char temp = text[index_i];
//         text[index_i] = text[j];
//         text[j] = temp;
//         index_i++;
//         j--;
//     }

//     int compared = strcmp(previous_string, text);

//     if (compared == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

int main()
{
    char sentence[1001];
    scanf("%s", sentence);

    // int result = is_palindrome(sentence, 0);

    int i = 0, j = strlen(sentence) - 1;
    int flag = 1;
    while (i < j)
    {
        if (sentence[i] != sentence[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }
    
    if (flag == 1)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}