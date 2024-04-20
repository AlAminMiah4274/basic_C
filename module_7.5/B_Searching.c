#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int find_numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &find_numbers[i]);
    }

    int x;
    scanf("%d", &n);
    int answer = -1;

    for (int i = 0; i < n; i++)
    {
        if(x == find_numbers[i])
        {
            answer = i;
        }
    }

    printf("%d\n", answer);

    return 0;
}