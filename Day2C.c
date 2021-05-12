//Write a C Program to perform all four basic Mathematical Operations on two numbers taken from user input.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1,n2;
    int sum, sub, mult;
    float div;
    printf("");
    scanf("%d%d",&n1,&n2);
     
    
    
      
    sum = n1 + n2;
    /*scanf("%d",&sum);*/
    
     
    
    sub = n1 - n2;
    /*scanf("%d",&sub);*/
   
    
  mult = n1 * n2;  
    /*scanf("%d",&mult);*/
    
    
   /* mod = n1 % n2;*/
    /*scanf("%d",&mod);*/
    
    
    div = (float)n1 / (float)n2;
   /*scanf("%f",div);*/
    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mult);
    /*printf("%d\n", mod);*/
    printf("%.2f", div);
  
    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
