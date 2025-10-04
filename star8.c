// 7. Accept number of elements to be print from user and print following 
// pattern 
// a b c d e f

#include<stdio.h>   
int main()
{
    int i ;
      scanf("%d",&i);

 for ( int j=1;j<=i; j++)
 {
    printf("  %c  ",j+96);
 }
    
     return 0;
 
}