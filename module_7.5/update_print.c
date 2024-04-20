#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int update_print[n];

    int x, v;
    scanf("%d %d", &x, &v);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &update_print[i]);
    }

    for (int i = n-1; i >= 0; i--)
    {
        if (i == x)
        {
            update_print[i] = v;
        }
        printf("%d\n", update_print[i]);
    }

    return 0;
}