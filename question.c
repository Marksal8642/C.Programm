#include <stdio.h>
#include <stdlib.h>

int main()
{
  double P,r,t,A,M;
   printf("amount to be deposit in the bank: ");
   scanf("%lf",&P);
   printf("\n enter the rate of interest:");
   scanf("%lf",&r);
   printf("\n How many years you want to deposit:");
   scanf("%d",&t);
   M=((r/100) * t);
   A=P*exp(M);
   printf("\n amount after %0.d years with interest is:%2.5lf",t,A);
    return 0;
}
