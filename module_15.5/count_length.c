#include <stdio.h>
#include <string.h>

int my_len(char *string_name)
{
    int count = 0;
    for (int i = 0; string_name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char text[1001];
    scanf("%s", text);

    int length = my_len(text);
    printf("%d\n", length);

    return 0;
}