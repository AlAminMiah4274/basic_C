#include <stdio.h>

int reverse_string(char *string_name, int i)
{
    if (string_name[i] == '\0') return 0;
    int count = reverse_string(string_name, i + 1);
    return count + 1;
}

int main()
{
    char text[1001];
    scanf("%s", text);

    int length = reverse_string(text, 0);
    printf("%d\n", length);

    return 0;
}