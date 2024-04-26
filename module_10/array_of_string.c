#include <stdio.h>
int main()
{
    int name[6];
    int size_of_name = sizeof(name);
    printf("%d\n", size_of_name);

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