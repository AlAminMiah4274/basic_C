#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    // if (x >= 65 && x <= 122)

    if (x >= 'A' && x <= 'Z')
    {
        int lower = x + 32;
        printf("%c", lower);
    }
    else 
    {
        int upper = x - 32;
        printf("%c", upper);
    }
    
    return 0;
}

/*
ASCII value: A-Z: 65-90 | a-z: 97-122
*/