//Write a C Program to arrange the elements in ascending order.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int a[10];
    int n,i,j,temp;
    
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
       for(i=1;i<=n;i++)
       {
    printf("%d ",a[i]);
       }
    
       
    return 0;
}
