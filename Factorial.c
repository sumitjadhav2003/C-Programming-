//. Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int num;
    int Fact =1;
    printf("Enter a number");
    scanf("%d",&num);

    for(int i = 1;i<=num;i++)
    {
        Fact = Fact*i;
    }

    printf("%d Factorial of  number %d",num,Fact);
}