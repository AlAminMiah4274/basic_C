
#include <stdio.h>
int main()
{
    int name[6];
    int value = sizeof(name);
    printf("%d\n", value);

    // for(int i = 0; i < 6; i++)
    // {
    //     scanf("%c", &name[i]);
    // }

    // for(int i = 0; i < 6; i++)
    // {
    //     printf("%c\n", name[i]);
    // }

    return 0;
}

// to find out array size we can use sizeof() method 