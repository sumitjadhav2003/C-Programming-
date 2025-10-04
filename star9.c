// 8. Accept number of elements to be print from user and print following 
// pattern 
// a c e g i k
#include<stdio.h>   
int main()
{
int i;
scanf("%d",&i);
for(int j=1;j<=i;j++)
{
    if(j%2!=0)
    {
        printf("  %c  ",j+96);
    }
}
}
    
     
