#include <stdio.h>
#include <stdlib.h>

int main()
{ float time;
int hour;
int min;
char s;

    printf("Enter the time in Sierra Leone (hour and minute)");
    scanf("%d",&hour);
    scanf("%c",&s);
    scanf("%d",&min);
    int ch=hour-5;
    int fch=24+ch;
    int japan = hour+9;
printf("Time in Sierra Leone = %d:%d GMT\n",hour,min);
if(hour<20){
        int final_time=(hour+3)-24;
        int f=(hour+9)-24;
printf("Time in Moscow = %d:%d GMT\n",final_time,min);
printf("Time in japan = %d:%d GMT\n",f,min);
}else if(hour==15){
printf("Time in japan = %d:%d GMT\n",hour+9,min);
}else if(hour==16){
printf("Time in japan = 00:%d GMT\n",min);
}
 if(ch<=0){
    printf("Time in Washington = %d:%d GMT\n",fch,min);
}
if (hour>5){
printf("Time in Washington = %d:%d GMT\n",hour-5,min);
}
if(japan>=0 && japan <15){
    printf("Time in Beijing = %d:%d GMT\n",hour+9,min);
}
 return 0;
}




