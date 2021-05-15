/*Write a C Program to determine the factorial of a number.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,num;
   int fact=1; 
    scanf("%d",&num);
    if (num<0)
        printf("ERROR");
    else{
    
    for(i=1;i<=num;++i){
     fact=fact*i;
    }   
    
    printf("%d",fact);
}
       
    return 0;
}
