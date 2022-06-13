#include <stdio.h>
#include <stdlib.h>

int main()
{

 char s[100];
 int length;

 printf("Enter a string to calculate its length\n");
 gets(s);

 length = strlen(s);

 printf("The length of the string: %d\n", length);
 return 0;
}

