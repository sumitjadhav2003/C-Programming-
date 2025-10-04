// 14.Accept number of rows from user and print following pattern 
// 1 2 3 4  
// 5 0 0 6  
// 7 0 0 8 
// 9 10 11 12
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==1 || i==n)
            {
                printf(" %d ",count);
                count++;
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
}