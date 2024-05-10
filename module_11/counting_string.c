#include <stdio.h>
#include <string.h>
int main()
{
    char letter[100];
    scanf("%s", letter);

    int counting_string[26] = {0};
    for (int i = 0; i < strlen(letter); i++)
    {
        int value_char_letter = letter[i] - 'a';
        counting_string[value_char_letter]++;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     if (counting_string[i] != 0)
    //     {
    //         printf("%c - %d", i + 'a', counting_string[i]);
    //     }
    // }

    /* to print according to the inputed string with zero */
    // for (int i = 0; i < strlen(letter); i++)
    // {
    //     int index_counting_string = letter[i] - 'a';
    //     printf("%c - %d\n", letter[i], counting_string[index_counting_string]);
    // }

    /* to print according to the inputed string without zero */
    for (int i = 0; i < strlen(letter); i++)
    {
        int index_counting_string = letter[i] - 'a';
        if (counting_string[index_counting_string] != 0)
        {
            printf("%c - %d\n", letter[i], counting_string[index_counting_string]);
        }
        counting_string[index_counting_string] = 0;
    }

    return 0;
}