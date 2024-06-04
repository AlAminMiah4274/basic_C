#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int array_a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array_a[i]);
        }

        // to copy array a to array b
        int array_b[n];
        for (int i = 0; i < n; i++)
        {
            array_b[i] = array_a[i];
        }

        // to sort the array b in ascending order 
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (array_b[i] < array_b[j])
                {
                    int temp = array_b[i];
                    array_b[i] = array_b[j];
                    array_b[j] = temp;
                }
                if (array_b[i] > array_b[j])
                {
                    int temp = array_b[i];
                    array_b[i] = array_b[j];
                    array_b[j] = temp;
                }
            }
        }

        // made absolute difference between array a and array b
        int array_c[n];
        for (int i = 0; i < n; i++)
        {
            array_c[i] = abs(array_a[i] - array_b[i]);
        }

        // to print the array c 
        for (int i = 0; i < n; i++)
        {
            printf("%d ", array_c[i]);
        }
        printf("\n");
        
    }

    return 0;
}