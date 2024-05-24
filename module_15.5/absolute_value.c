#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int my_abs(int value)
{
    int absolute_value = abs(value);
    
    return absolute_value;
}

int main()
{
    int n;
    scanf("%d", &n);
    int result = my_abs(n);

    printf("%d\n", result);

    return 0;
}