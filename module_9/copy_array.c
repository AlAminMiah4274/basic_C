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

    int size_copied_array = first_size + second_size;
    int copied_array[size_copied_array];

    for(int i = 0; i < first_size; i++)
    {
        copied_array[i] = first_array[i];
    }

    int available_position_copied_array = first_size;

    for(int i = 0; i < second_size; i++)
    {
        copied_array[available_position_copied_array] = second_array[i];
        available_position_copied_array++;
    }

    for(int i = 0; i < size_copied_array; i++)
    {
        printf("%d\n", copied_array[i]);
    }

    return 0;
}