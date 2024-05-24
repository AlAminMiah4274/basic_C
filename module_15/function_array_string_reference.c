#include <stdio.h>
#include <string.h>

// void receive_string(char *string_name)
// {
//     string_name[5] = 'F';
// }

void receive_array(int *array_name, int array_size)
{
    array_name[2] = 503;
}

int main()
{

    int numbers[5] = {10, 20, 30, 40, 50};
    receive_array(numbers, 5);
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // char text[101] = "my life my rules";
    // receive_string(text);

    // printf("%s\n", text);

    return 0;
}