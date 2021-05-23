/*Write a C program to print the following number pattern
55555
 4444
  333
   22
    1*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,j;
    int a,b;
    scanf("%d",&a);
   int t=a;
   for(i=1;i<=t;i++){
       for(j=1;j<i;j++){
       printf(" ");
       }
       
       for(b=1;b<=a;b++){
       printf("%d",a);
       }
       a--;
       printf(" \n");
   }   
    return 0;
}
