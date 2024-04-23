#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int remove_array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &remove_array[i]);
    }

    int position;
    scanf("%d", &position);

    for(int i = position; i < n - 1; i++)
    {
        remove_array[i] = remove_array[i + 1];
    }

    for(int i = 0; i < n-1; i++)
    {
        printf("%d\n", remove_array[i]);
    }

    return 0;
}