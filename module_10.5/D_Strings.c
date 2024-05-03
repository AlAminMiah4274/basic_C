#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);

    int length_a = strlen(a);
    int length_b = strlen(b);

    // concatenating
    char concatenate[21];
    for(int i = 0; i < length_a+1; i++)
    {
        concatenate[i] = a[i];
    }

    int remaining_space_concatenate = length_a;
    for(int i = 0; i < length_b+1; i++)
    {
        concatenate[remaining_space_concatenate] = b[i];
        remaining_space_concatenate++;
    }

    // to swap the value
    char swaped = a[0];
    a[0] = b[0];
    b[0] = swaped;


    printf("%d %d\n", length_a, length_b);
    printf("%s\n", concatenate);
    printf("%s %s\n", a, b);

    return 0;
}