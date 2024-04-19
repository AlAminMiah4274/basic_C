#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int find_numbers [n];

    // int x;
    // scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &find_numbers[i]);
    }

    int all_num;
    for (int i = 0; i < n; i++)
    {
        // printf("%d\n", find_numbers[i]);
        all_num = find_numbers[i];
        
    }

    printf("%d\n", all_num);

    return 0;
}