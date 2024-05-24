#include <stdio.h>
#include <string.h>

void receive_string(char *string_name)
{
    int length = strlen(string_name);
    printf("%d\n", length);
}

int main()
{
    char letters[101] = "Alamin";
    receive_string(letters);

    return 0;
}