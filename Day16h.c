//Write a C program to find the minimum and maximum element of an array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      int n,a[10],i,min,max;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
       
    min=max=a[1];
    for(i=2;i<=n;i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("%d",min);
    printf("\n%d",max);
    
    return 0;
}
