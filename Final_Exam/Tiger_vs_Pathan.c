#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char round[n];
        scanf("%s", round);

        int t = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            if (round[i] == 'T')
            {
                t++;
            }
            else if (round[i] == 'P')
            {
                p++;
            }
        }

        if (t > p)
        {
            printf("Tiger\n");
        }
        else if (t == p)
        {
            printf("Draw\n");
        }
        else if (t < p)
        {
            printf("Pathaan\n");
        }
    }

    return 0;
}