// 11.Accept number of rows from user and print following pattern 
// a a a a  
// a a a a  
// a a a a 
// a a a a

#include<stdio.h>
int main()  {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf(" a ");
        }
        printf("\n");
    }
}