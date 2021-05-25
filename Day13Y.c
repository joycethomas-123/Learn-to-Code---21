/*Write a program in C to Find the Frequency of Characters.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      char a[100];
    int i;
    char k;
    int count=0;
    gets(a);
     scanf("%c",&k);
    for(i=0;a[i]!='\0';++i)
    {
     if(k == a[i])
       count++;  
    }
    printf("%d",count);    
    
    return 0;
}
