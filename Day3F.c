/*Write a C Program to convert Fahrenheit to Celsius.*/

#include <stdio.h>

int main() {
float fahre, celsi;
    scanf("%f",&fahre);
    
    celsi=((fahre - 32)*5)/9;
    printf("%.2f",celsi);
       
    return 0;
}
