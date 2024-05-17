#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char sentence[10001];
        scanf("%s", sentence);

        int capital_letter;
        int small_letter;
        int digits;
        for (int i = 0; i < strlen(sentence); i++)
        {
            if (sentence[i] >= 'A' && sentence[i] <= 'Z')
            {
                capital_letter++;
            }
            else if (sentence[i] >= 'a' && sentence[i] <= 'z')
            {
                small_letter++;
            }
            else if (sentence[i] >= '0' && sentence[i] <= '9')
            {
                digits++;
            }
        }

        while (1)
        {
            printf("%d %d %d\n", capital_letter, small_letter, digits);
            capital_letter = 0;
            small_letter = 0;
            digits = 0;
            break;
        }
    }

    return 0;
}