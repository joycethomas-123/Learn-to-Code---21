/*Write a C Program to display each day of the week using switch case.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int day;
    scanf("%d",&day);
    
    switch(day){
        case 1:
        printf("Sunday\n");
        break;
        case 2:
        printf("Monday\n");
        break;
        case 3:
        printf("Tuesday\n");
        break;
        case 4:
        printf("Wednesday\n");
        break;
        case 5:
        printf("Thursday\n");
        break;
        case 6: 
        printf("Friday\n");
        break;
        case 7:
        printf("Saturday\n");
        break;
        default:
        printf("Error");
        break;
    }   
    return 0;
}
