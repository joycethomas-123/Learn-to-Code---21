/*Write a C Program to find the maximum and minimum from three user inputted numbers.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b)
        {
        if(a>c)
            printf("%d\n",a);
      
        
        else
          printf("%d\n",c);
        
        }
    else
        
        {
        if(b>c)
            
          printf("%d\n",b);
        
        else

          printf("%d\n",c);
        
        }
    
   if(a<b)
 {
       if(a<c)
         printf("%d",a);
    else
          printf("%d",c);
       }
    else
       {
        if(b<c)
        
        printf("%d",b);
        else
        
         printf("%d",c);

}   
    return 0;
}
