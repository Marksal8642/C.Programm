#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k, n, a;
    printf("enter a number\n");
    scanf("%d", &n);

    for(i=n; i>= 1; i--)
    {
        for(a = i; a < n; a++)
             printf ("*");
        for(k = 1; k <= (2 * i - 1); k++)

              printf("");
            printf("\n");
              printf("*");
    }
    return 0;
}
