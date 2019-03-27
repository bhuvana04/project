#include <stdio.h>
 
int main()
{
   int n=12345, reverse = 0;
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }
 
   printf("Reverse of entered number is = %d\n", reverse);
 
   return 0;
}

