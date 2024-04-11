#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum_x = n - 12;
    int x = sum_x / 4;
    printf("%d %d %d %d", x, x+2, x+4, x+6);

    return 0;
}