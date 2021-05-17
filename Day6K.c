/*WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float a,b,c;
    float percent;
    scanf("%f%f%f",&a,&b,&c);
    
    percent=((a+b+c)/300)*100;
    printf("%.2f\n",percent);
    if(percent>=90)
        printf("A");
    else if (percent>=80)
        printf("B");
    else if (percent>=70)
        printf("C");
    else if (percent>=60)
        printf("D");
    else if (percent>=40)
        printf("E");
    else if (percent<40)
        printf("F");
    else
        printf("failed");
       
    return 0;
}
