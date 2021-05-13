/*Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.*/

#include <stdio.h>

int main() {
  float a,r,b,h;
    int sa;
    float ca, ta;
    
    scanf("%f%f%f%f",&a,&r,&b,&h);
    
    sa=a*a;
    ca=3.14*r*r;
    ta=.5*b*h;
   
    printf("%d\n", sa);
    printf("%.1f\n",ca);
    printf("%.2f",ta);
        
    return 0;
}
