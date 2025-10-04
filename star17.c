
// 16.Accept number of rows from user and print following pattern 
// * 
// * * 
// * - *  
// * - - * 
// * - - - *
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1||i==1||i==j||j==1)
            {
               printf(" * ");
            }
            else
            {
            printf(" - ");
            }

        
          }
     printf("\n");
     }
}
