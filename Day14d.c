/*Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
       int i,j,a[100][100],m,n;
    scanf("%d%d",&m,&n);
  
    
    
    
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    if(m==n)
    {
        
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            
            if(i==j)
            {
            printf("%d ",a[i][j]);
            }
         
        }
    }
        printf("\n");
        
        for(i=1;i<=m;i++)
        {  
            
                printf("%d ",a[i][n]);
                n--;
            }
        }
