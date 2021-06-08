//Write a C program to print inverted full pyramid of *

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    if(n<1)
            {
                printf("ERROR");
            }
    else
    {
        for(i=0;i<n;i++)
    {
        for(j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for (j=0;j<2*n-2*i-1;j++)
            {
                printf("* ");
            }
            printf("\n");
            }
}
         
    return 0;
}
