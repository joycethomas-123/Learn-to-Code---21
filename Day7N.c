/*Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int operator;
float b,c;
    double sum,sub,mul;
      float div;  
    scanf("%d%f%f",&operator,&b,&c);
     
    
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    switch(operator){
            case 1 :
            sum=b+c;
            printf("%.0lf",sum);
            break;
            case 2 :
            sub=b-c;
            printf("%.0lf",sub);
            break;
            case 3 :
            mul=b*c;
            printf("%.0lf",mul);
            break;
            case 4 :
            div=b/c;
            if(c==0){
                printf("Cannot be determined");
                break;
            }
                else
                {    
            printf("%.1f",div);
                    break;
                }     
    }
      return 0;
}
