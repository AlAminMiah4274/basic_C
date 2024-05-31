#include <stdio.h>

void text_print(int i)
{
    if (i == 0) return;
    printf("I love Recursion\n");
    text_print(i - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    text_print(n);
    
    return 0;
}