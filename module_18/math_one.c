#include <stdio.h>

int main()
{
    int x, y, x_plus_y, x_minus_y;
    scanf("%d %d", &x_plus_y, &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = x_plus_y - x;

    printf("%d %d\n", x, y);

    return 0;
}