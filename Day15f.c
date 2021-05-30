//Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int a[100][100],b[100][100],pro[100][100];
    int am,an;
    int bm,bn;
    int sum=0;
    int i,j,k;
    
    scanf("%d%d",&am,&an);
    
    for(i=1;i<=am;i++)
    {
        for(j=1;j<=an;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
   scanf("%d%d",&bm,&bn);
    
        for(i=1;i<=bm;i++)
    {
        for(j=1;j<=bn;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    
    
    if(an!=bm)
    {
        printf("ERROR");
    }
    else
    { 
        for(i=1;i<=am;i++)
       {
           for(j=1;j<=bn;j++)
           {
               for(k=1;k<=bm;k++)
               {
                   sum=sum+(a[i][k]*b[k][j]);
               }
               pro[i][j]=sum;
               sum=0;
           }
       } 
    
    
    for(i=1;i<=am;i++)
    {
        for(j=1;j<=bn;j++)
        {
            printf("%d ",pro[i][j]);
        }
        printf("\n");
    }
    }  
    return 0;
}
