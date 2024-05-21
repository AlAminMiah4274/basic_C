#include <stdio.h>

int add_two_value(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int value_sum = add_two_value(27, 56);
    printf("%d\n", value_sum);

    return 0;
}

/*
#Syntax of a function: 
return type function name(parameter)
{
    code:------
    -----------
    -----------

    return 
}

#Types of function:
1. return + parameter
2. return + no parameter
3. no return + parameter
4. no return + no parameter
*/