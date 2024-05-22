#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int number_sorting[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number_sorting[i]);
    }

    // exchanging the value 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (number_sorting[i] > number_sorting[j])
            {
                int temp = number_sorting[i];
                number_sorting[i] = number_sorting[j];
                number_sorting[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", number_sorting[i]);
    }
}