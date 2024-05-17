#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);

        // to take input of the array
        int numbers[N];
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &numbers[j]);
        }

        int X;
        scanf("%d", &X);

        // to check the condition 
        int result_print = 0;
        for (int k = 0; k < N; k++)
        {
            if (numbers[k] == X)
            {
                result_print = 1;
                break;
            }
        }

        // to print the result depending on the condition
        if (result_print)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}