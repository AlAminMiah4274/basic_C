#include <stdio.h>
#include <string.h>
int main()
{
    // char name[] = "Al Amin Miah";
    // int size = sizeof(name);
    // // gets(name);
    // printf("%d\n", size);

    // char name[] = "Al Amin Miah";
    // int size = sizeof(name);
    // printf("%d\n", size);

    char name[13];
    fgets(name, 12, stdin);
    name[10] = '\0';
    printf("%s\n", name);

    return 0;
}