#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    if(number > 0){
        printf("It is a positive number");
    }
    else if(number == 0){
        printf("It is zero");
    }
    else{
        printf("It is a negative number");
    }

    return 0;
}