#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        // used the formula of inverse proportionality
        int farmers = M1 * D;
        int additional_farmers = M1 + M2;
        int days = farmers / additional_farmers;
        int result = D - days;

        printf("%d\n", result);
    }

    return 0;
}