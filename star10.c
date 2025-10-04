// 9. Accept number of elements to be print from user and print following 
// pattern 
// A B C D E F
#include<stdio.h>
int main()
{
    int i ;
      scanf("%d",&i);

 for ( int j=1;j<=i; j++)
 {
    printf("  %c  ",j+64);
 }
    
     return 0;
 
}