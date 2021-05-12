//Write a C Program to read an integer and find it's square root.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    double a, squareroot;
    printf("");
    scanf("%lf",&a);
    
    
    squareroot = sqrt(a);
    printf("%.1lf", squareroot);


    return 0;
}
