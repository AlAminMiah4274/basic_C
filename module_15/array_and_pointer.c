#include <stdio.h>
int main()
{
    int number[5] = {10, 20, 30, 40, 50};

    // array is a pointer. Evidence about the claim:
    // printf("%p\n", &number[0]);
    // printf("%p\n", number); // ####

    // to use an array like pointer: *(number + 1), *(1 + number), 1[number];

    // int *number = &number[0]; ####

    // printf("%d\n", number[2]);
    // int value = * (number + 2);
    // printf("%d\n", value);

    printf("%d\n", *(number + 1));
    printf("%d\n", *(2 + number));
    printf("%d\n", 0[number]);

    return 0;
}