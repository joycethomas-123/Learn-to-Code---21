/*Write a C program to check whether a number present in the 1D array or not.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[7],i,j,n;
    int temp=0,found=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&j);
    temp=j;
    for(i=0;i<n;i++)
    {
        if(a[i]==temp){
            found=1;
            break;
        }
        
             }  
    if(found==1){
        printf("%d is present in this array",a[i]);
    }
    else
    {
        printf("%d is not present in this array",temp);    
    
        }    
      return 0;
   
}
