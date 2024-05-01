#include <stdio.h>
#include <string.h>
int main()
{
    char name[11];
    fgets(name, 11, stdin);    

    printf("%s\n", name);

    return 0;
    
}

// to find out array size we can use sizeof() method 