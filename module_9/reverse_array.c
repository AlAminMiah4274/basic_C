#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int reverse_number[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &reverse_number[i]);
    }

    // used two pointers method to reverse the array
    int i = 0, j = n-1;
    while(i < j)
    {
        int temp = reverse_number[i];
        reverse_number[i] = reverse_number[j];
        reverse_number[j] = temp;
        i++;
        j--;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", reverse_number[i]);
    }

    return 0;
}