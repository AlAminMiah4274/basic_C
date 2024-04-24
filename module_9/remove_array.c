#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int remove_number[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &remove_number[i]);
    }

    // moving the value left to right for removing
    int position;
    scanf("%d", &position);

    for(int i = position; i < n-1; i++)
    {
        remove_number[i] = remove_number[i + 1];
    }

    for(int i = 0; i < n-1; i++)
    {
        printf("%d\n", remove_number[i]);
    }

    return 0;
}