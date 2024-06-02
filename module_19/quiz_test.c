#include <stdio.h>

int count(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count(n / 10);
   }
}

int main()
{
    int n = 1234;

    int result = count(n);
    printf("%d\n", result);

    return 0;
}