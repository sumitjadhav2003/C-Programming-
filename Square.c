#include<stdio.h>
int main()
{
 int  length;
int  breadth;
  
printf("Enter the length");
scanf("%d",&length);

printf("Enter the breadth");
scanf("%d",& breadth);

int Square = (length*length) + (breadth *breadth);
printf("Square of :%d" ,Square);
return 0;
}