#include<stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("Enter a number");
    scanf("%d",&n);

   for (int i =1;i<n;i++)
    {
        if(n%i==0)
        {

            count=count+i;
        }
    }

    if (count==n)
    {
        printf(" %d : perfectNumber", count);
    }
    else{
        printf("%d : not perfectNumber",count);
    }
    
}