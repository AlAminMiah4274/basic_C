#include <stdio.h>

void receive_array(double *array_name, int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        printf("%0.2lf ", array_name[i]);
    }
    printf("\n");
}

int main()
{
    double numbers[6] = {5.2, 4.1, 5.3, 1.5, 6.7, 4.92};
    receive_array(numbers, 6);

    return 0;
}