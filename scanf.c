//. Write a program which accept number from user and print that number. 

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number");
//     scanf("%d" ,&a);
// }
//4. Write a program which accept two numbers and print its addition. 

//#include<stdio.h>
// int main()
// {
//     int a;
//     int b;
//     printf("Enter a number");
//     scanf("%d" ,&a);

//     printf("Enter second number");
//     scanf("%d", &b);

//     int sum= a+b;

//     printf("%d  sum of Two numbers", sum);


// }

 //Write a program which accept three numbers and print its multiplication. 

//    #include<stdio.h>
//     int main()
// {
//     int a;
//     int b;
//     int c;
//     int multi = 0;
//     printf("Enter a number: a  ");
//     scanf("%d" ,&a);

//     printf("Enter second number: b  ");
//     scanf("%d", &b);

   

//     printf("Enter a Third number: c  ");
//     scanf("%d",&c);

//        multi = a*b *c;

//     printf("%d Multiplication of three numbers" , multi);


// }
// Write a program which accept two numbers and print maximum number. 

// #include<stdio.h>
// int main()
// {
//     int a;
//     int b;
    
//     printf("Enter a number");
//     scanf("%d" ,&a);
//     printf("Enter second number");
//     scanf("%d", &b);

//     if(a>b)
//     {
//         printf("%d a is grter value", a);
//     }
//     else{
//         printf("%d b is grether value " , b);
//     }
//     }


// Write a program which accept two numbers and print minimum number.  

//  #include<stdio.h>
// int main()
// {
//     int a;
//     int b;
    
//     printf("Enter a number");
//     scanf("%d" ,&a);
//     printf("Enter second number");
//     scanf("%d", &b);

//     if(a<b)
//     {
//         printf("%d  is lesser value", a);
//     }
//     else{
//         printf("%d  is lesser value " , b);
//     }
//     }


//8. Write a program which accepts N from user and print all even numbers up to 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter N numbers");
    scanf("%d " , & n);

    for (int i =1; i <= n; i++)
    {
        if(i%2 == 0)
        {
            printf("%d \n",i);
        }
    }
    
    {
       
    }
    

}