#include<stdio.h>
int main()
{
    int prime;
    int count = 0;
    printf("Enter N numbers");
    scanf("%d " , & prime);

   for(int i=1;i<=prime;i++)

    {
        if(prime%i == 0)
        {
           count++;
        }
        
    }
    
    if(count == 2)
    {
        printf("%d : prime number", prime);
    }
    else{
        printf("%d : not prime number", prime);
    }
    
}