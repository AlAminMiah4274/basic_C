#include <stdio.h>
#include <string.h>
int main()
{
    char number[1000001];
    scanf("%s", number);

    int sum = 0;
    for(int i = 0; i < strlen(number); i++)
    {
        sum += number[i] - '0';
    }

    printf("%d\n", sum);

    return 0;
}