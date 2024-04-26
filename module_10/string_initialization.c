#include <stdio.h>
int main()
{
    // char name[] = "Shahanor is my friend's name";
    // printf("%s\n", name);
    char name[7];
    scanf("%s", name);
    int value = sizeof(name);
    printf("%d\n", value);

    return 0;
}