/*Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a,b,c;
    double d,r1,r2;
    double real,img;
    
    scanf("%lf%lf%lf",&a,&b,&c);
    
    d=(b*b)-(4*a*c);
    
    if(d>0){
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Distinct Real : %.2lf , %.2lf",r1,r2);
    }
    else if(d==0)
    {
        r1 = r2 = -b/(2*a);
        printf("Equal Real: %.2lf , %.2lf ",r1,r2);
    }
    else{
        if(d<0)
        {
          real=-b/(2*a);
            img=sqrt(-d)/(2*a);
        
        printf("Complex: %.2lf + i%.2lf , %.2lf - i%.2lf",real,img,real,img);
        }
    
    }
    
     
    return 0;
}
