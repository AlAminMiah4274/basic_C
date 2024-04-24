#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int insert_number[n + 1];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &insert_number[i]);
    }

    // moving the value right to left for inserting 
    int position, value;
    scanf("%d %d", &position, &value);

    for(int i = n; i >= position + 1; i--)
    {
        insert_number[i] = insert_number[i - 1];
    }

    insert_number[position] = value;

    for(int i = 0; i <= n; i++)
    {
        printf("%d\n", insert_number[i]);
    }

    return 0;
}