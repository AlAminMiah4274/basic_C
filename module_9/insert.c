#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int insert_number[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &insert_number[i]);
    }

    int position, value;
    scanf("%d %d", &position, &value);

    // to keep the value in right most 
    for (int i = n; i <= position + 1; i--)
    {
        insert_number[i] = insert_number[i - 1];
    }

    return 0;
}