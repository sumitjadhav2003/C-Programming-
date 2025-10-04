#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf(" %c ",j+96);
        }
        printf("\n");
    }
}
// 12.Accept number of rows from user and print following pattern 
// a b c d  
// a b c d  
// a b c d 
// a b c d 