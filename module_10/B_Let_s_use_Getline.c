#include <stdio.h>
#include <stdio.h>
int main()
{
    char text[1000001];
    fgets(text, 1000001, stdin);

    for(int i = 0; text[i] != '\\'; i++)
    {
        printf("%c", text[i]);
    }

    return 0;
}