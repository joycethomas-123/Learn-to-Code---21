//Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a;
    int b;
    float c;
    double d;
    /*printf("enter the character value here : ");*/
    scanf("%c",&a);
    printf("%c \n", a);
   /* printf("enter integer : ");*/
    scanf("%d",&b);
 printf("%d \n", b);
   /* printf("enter floating point no. : ");*/
    scanf("%f",&c);
    printf("%f \n", c);
   /* printf("enter double value : ");*/
    scanf("%lf",&d);
    printf("%lf \n", d);
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
