

//1. Write a program to check whether a given year is a leap year.
#include<stdio.h>
int main()
{
    int Year;
    printf("Enter Year");
    scanf("%d", &Year);
    if(Year % 4==0)
    {
           if(Year % 100 != 0|| Year % 400 ==0)
           {
            printf(" %d its leap yaer" , Year);
           }
           else {
            printf("  %d is not lepa Year", Year);
           }
    }
    else
    {
        printf(" %d is not leap Year" , Year);
    }
}