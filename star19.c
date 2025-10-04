// 18.Accept number of rows from user and print following pattern. (- is blank 
// space) 
//  *  *  *  *  * 
//  *  *        *
//  *     *     *
//  *        *  *
//  *  *  *  *  *


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        if(i==j||j==i||j==n||i==n||j==1||i==1)
        {
            printf(" * ");
        }
        else
        {
            printf("   ");
        }
        printf("\n");
    }
}