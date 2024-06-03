#include <stdio.h>
int main()
{
    int X, R;
    scanf("%d %d", &X, &R);

    // formula: R * (100 / (100 - X));
    float discount_percentage = 100 - X;
    float divided = 100 / discount_percentage;
    float original_price = R * divided;
    printf("%0.2f", original_price);

    return 0;
}