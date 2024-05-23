#include <stdio.h>

void receive_array(int array_name[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", array_name[i]);
    }
    printf("\n");
}

int main()
{
    int numbers[5] = {11, 51, 87, 35, 49};

    receive_array(numbers, 5);

    return 0;
}