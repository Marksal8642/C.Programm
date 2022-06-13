#include <stdio.h>
#include <stdlib.h>

int main()
{ /* a program to calculate sum of
    1,1.1,1.2,1.3,1.4,.........2.0
    */

   float a=1.2;
   float n=1.1;
   float d= 0.1;
   float sum=(n/2)*(2*a+(n+1)*d);
   printf("Sum = %f",sum);
   return 0;
}

