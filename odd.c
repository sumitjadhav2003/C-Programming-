

//10.Write a program which accept N from user and print number-line for N.
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number");
//      scanf("%d",&n);
    
//      for(int i=-4;i<=n;i++)
//      {
//         printf("%d \n",i);
//      }

// }

//11.Write a program which accept N and print first 5 multiples of N. 

// #include <stdio.h>
// int main()
// {
// int a=4;

//     for(int i =1;i<=10;i++)
//     {
//            int Table = a*i;
//            printf("%d  \n",Table);
//     }
// }
//12.Write a program which accept N numbers from user and print addition of that 
//numbers. 

#include<stdio.h>
int main()
{
    int count = 0, n,sum=0;
   
     printf("Enter a number");
        scanf("%d",&n);
        while(n > 0)
        {
            int rem = n%10;
            sum = sum+rem;
            n = n/10;
            
        }
        printf("%d sum:",sum);
    
    //  for(int i=1;i<=a[];i++)
    //  {
    //     count = a[i]+count;
    //     printf("%d \n",count);
    //  }

}