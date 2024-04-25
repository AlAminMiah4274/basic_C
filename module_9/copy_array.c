#include <stdio.h>
int main()
{
    int first_size;
    scanf("%d", &first_size);
    int first_array[first_size];

    for(int i = 0; i < first_size; i++)
    {
        scanf("%d", &first_array[i]);
    }

    int second_size;
    scanf("%d", &second_size);
    int second_array[second_size];

    for(int i = 0; i < second_size; i++)
    {
        scanf("%d", &second_array[i]);
    }

    int third_array_size = first_size + second_size;
    int third_array[third_array_size];

    for(int i = 0; i < first_size; i++)
    {
        third_array[i] = first_array[i];
    }

    int available_space_of_third_array = first_size;

    for(int i = 0; i < second_size; i++)
    {
        third_array[available_space_of_third_array] = second_array[i];
        available_space_of_third_array++;
    }

    for(int i = 0; i < third_array_size; i++)
    {
        printf("%d\n", third_array[i]);
    }

    return 0;
}