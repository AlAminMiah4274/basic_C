#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    // double digit;
    // scanf("%lf", &digit);

    // int value_ceil = ceil(digit);
    // printf("Ceiling: %d\n", value_ceil);

    // int value_floor = floor(digit);
    // printf("Floor: %d\n", value_floor);

    // int value_round = round(digit);
    // printf("Round: %d\n", value_round);

    // double num;
    // scanf("%lf", &num);

    // double value_sroot = sqrt(num);
    // printf("%0.2lf\n", value_sroot);

    // int a, b;
    // scanf("%d %d", &a, &b);

    // int value_power = pow(a * 1.0, b * 1.0);
    // printf("%d\n", value_power);

    int num;
    scanf("%d", &num);

    int value_absolute = abs(num);
    printf("%d\n", value_absolute);

    return 0;
}

/*
Built in function for math.h:
ceil(), floor(), round(), sqrt()

abs() --> <stdlib.h>
*/