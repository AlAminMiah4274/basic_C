#include <stdio.h>
int main()
{
    char text[100];
    scanf("%s", text);

    int length_string = 0;
    int i = 0;
    while(text[i] != '\0')
    {
        length_string++;
        i++;
    }

    printf("%d\n", length_string);

    return 0;
}