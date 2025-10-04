

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}

// 19.Accept number of rows from user and print following pattern. (- is blank 
// space) 
// * * * * * 
// * * * * 
// * * *  
// * * 
// *
