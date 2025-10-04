// 4. Accept number of elements to be print from user and print following 
// pattern 
// 1 3 5 7 9 10

#include<stdio.h>
int main()
{
    int i ;
      scanf("%d",&i);

 for ( int j=1;j<=i; j++)
 {
    if(j%2!=0)
    {
    printf("  %d  ",j);
    }
 }
    
     return 0;
 
}