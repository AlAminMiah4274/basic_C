#include <stdio.h>
#include <string.h>
int main()
{
    char one[100], two[100];
    scanf("%s %s", one, two);

    // for (int i = 0; i < strlen(two); i++)
    // {
    //     one[i] = two[i];
    // }

    strcpy(one, two);

    printf("%s %s\n", one, two);

    return 0;
}