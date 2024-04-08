#include <stdio.h>
int main()
{
    // int D, Q, R;
    // scanf("%d %d %d", &D, &Q, &R);

    // int d = D - R;
    // int divisor = d / Q;
    // printf("%d", divisor);

    int x, y;
    scanf("%d %d", &x, &y);

    int both = x - y;
    int rina = both / 2;
    int mina = both / 2 + y;
    printf("%d %d", mina, rina);

    return 0;
}