#include <stdio.h>
#include <stdlib.h>
#define KMS_PER_MILE 1.609
int main()
{
    double miles, kms;

     printf("enter distance in miles");
     scanf("%lf",&miles);
     printf("the distance in miles is %.2f.\n", miles);

     kms = KMS_PER_MILE * miles;

    printf("That equal %.2f kilometer.\n", kms);
    return 0;
}
