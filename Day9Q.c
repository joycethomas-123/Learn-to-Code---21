/*C program to print the HCF of two numbers*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int a,b;
    int i,j,hcf=0;
    
    scanf("%d%d",&a,&b);
    j=(a>b)?a:b;
    for(i=1;i<=j;i++)
    {
        if(a%i==0&&b%i==0){
            hcf=i;
    }
    }
    printf("%d",hcf);
    return 0;
}
