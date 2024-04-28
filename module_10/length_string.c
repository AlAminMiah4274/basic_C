#include <stdio.h>
#include <string.h>
int main()
{
    char text[100];
    scanf("%s", text);
    int length_text = strlen(text);
    printf("%d\n", length_text);

    return 0;
}