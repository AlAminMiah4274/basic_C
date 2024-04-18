#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum_number [n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sum_number[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += sum_number[i];
    }
    printf("%d\n", sum);

    // int arrayName[] = {1, 2, 3};
    // printf("%d\n", arrayName[1]);

    // int arrayName[] = {1, 2, 3};
    // printf("%d\n", arrayName[3]);

    return 0;
}