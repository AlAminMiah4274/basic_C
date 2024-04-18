#include <stdio.h>
int main()
{
    // int class_roll [5] = {10, 50, 41, 78, 13};
    // for (int i = 4; i >= 0; i--)
    // {
    //     printf("%d\n", class_roll[i]);
    // }

    // int number [5];

    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &number[i]);
    // }

    // for (int i = 4; i >= 0; i--)
    // {
    //     printf("%d\n", number[i]);
    // }

    int n; // to mean size/variable number of an array
    scanf("%d", &n);
    int friend_age [n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &friend_age[i]);
    }

    for (int i = n-1; i >= 0; i--)
    {
        printf("%d\n", friend_age[i]);
    }

    return 0;
}

/*
Home work: 
1. array of even numbers
2. array of odd numbers
*/