#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 400)
    {
        printf("I will take burger today.");
    }
    else if(tk >= 150)
    {
        printf("I will take fuchka.");
    }
    else
    {
        printf("I won't take any food.");
    }

    return 0;
}

// more conditional statements 