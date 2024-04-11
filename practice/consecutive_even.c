#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sum_x = n - 20;
    int x = sum_x / 5;

    printf("%d %d %d %d %d", x, x + 2, x+4, x+6, x+8);

    return 0;
}