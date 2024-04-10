#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int step = x / 3;
    double steps = x * 1.0 / 3;

    if (step == steps)
    {
        printf("%d", step);
    }
    else
    {
        printf("%d", step + 1);
    }

    return 0;
}