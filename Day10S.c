/*Fn = 0 1 1 2 3 5 8 13 21
Write a C program to print the above series starting from 0 and the upperlimit is determined by the user*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,a,b,count,sum;
    a=0;
    b=1;
    count=1;
    scanf("%d",&n);
    
    while(count<=n)
    {
        printf("%d ",a);
            sum=a+b;
        a=b;
        b=sum;
        count++;
    }  
    return 0;
}
