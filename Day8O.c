/*Write a C Program to identify if a number is a palindrome or not.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int number, remainder, value=0, assign;
    scanf("%d",&number);
    assign=number;
    
    while(number>0){
        
        remainder=number%10;
    value=(value*10)+remainder; 
    number=number/10;
    }
    if(assign==value)
        printf("Yes");
    else
        printf("No");   
    return 0;
}
