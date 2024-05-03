#include <stdio.h>
#include <string.h>
int main()
{
    char palindrome[1001];
    scanf("%s", palindrome);
    int length_palindrome = strlen(palindrome);

    // to copy the real string before reverse
    char before_reverse[1001];
    for (int i = 0; i < length_palindrome + 1; i++)
    {
        before_reverse[i] = palindrome[i];
    }

    // to reverse the string
    int i = 0, j = length_palindrome-1;
    while (i < j)
    {
        int temp = palindrome[i];
        palindrome[i] = palindrome[j];
        palindrome[j] = temp;
        i++;
        j--;
    }

    // to check if it is palindrome or not
    int is_palindrome = 1;
    for (int i = 0; i < length_palindrome; i++)
    {
        if(before_reverse[i] != palindrome[i])
        {
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}