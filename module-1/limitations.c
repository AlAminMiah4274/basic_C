#include <stdio.h>
int main()
{
    // int a = 1000000000;
    // printf("%d", a);

    // long long int b = 1000000000000000000;
    // printf("%lld", b);

    float f = 2004572.85789;
    printf("%0.7f", f);

    // double f = 475457478447.125478495457944;
    // printf("%0.15lf", f);
    return 0;
}

/*
Data type limitations: 
1. int --> 10 digit, 10^9
2. long long int --> 19 digit, 10^18 --input and output: "%lld"--

3. float --> 8 digit, 10^7
4. double --> 16 digit, 10^15 --input and output: "%lf"--
*/