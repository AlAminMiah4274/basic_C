#include <stdio.h>
#include <string.h>
int main()
{
    char s_string[1001], t_string[1001];
    scanf("%s %s", s_string, t_string);
    int length_s = strlen(s_string);
    int length_t = strlen(t_string);

    printf("%d %d\n", length_s, length_t);
    printf("%s %s\n", s_string, t_string);

    return 0;
}