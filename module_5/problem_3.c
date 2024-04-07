#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    if (x >= 65 && x <= 90)
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