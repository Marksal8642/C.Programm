#include <stdio.h>
#include <stdlib.h>

int main()
{
   int height, length, width, volume, weight;
    //height = 8;
    //length = 12;
    //width = 10;
   // volume = height * length * width;
    //weight = (volume + 165) /166;
    //printf("Dimensions; %d*%d*%d\n", height * length * width );
   // printf("volume (cubic inches); %d\n", volume);
    //printf("Dimensions weight (pounds); %d\n", weight);
    printf("enter the height");
    scanf("%d",& height);
    printf("enter the length");
     scanf("%d",&length);
    printf("enter the width");
   scanf("%d", &width);

   volume = height * length * width;
   weight = (volume + 165) /166;

   printf("Dimensions weight (pounds); %d\n", weight);
    return 0;
}
