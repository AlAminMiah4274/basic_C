#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int received_gifts = n / m;
    int total_gifts = received_gifts * m;
    int remaining_gifts = n - total_gifts;

    printf("%d %d", received_gifts, remaining_gifts);

    return 0;
}