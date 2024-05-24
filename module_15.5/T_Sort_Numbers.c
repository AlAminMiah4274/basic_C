#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int numbers[3] = {a, b, c};

    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", numbers[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}