// Write a program to count the number of vowels in a string.
#include <stdio.h>
int main()
{
      int count =0;
      char s1[]="Hello";

      for(int i=0;i<=s1[i];i++)
      {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
            count=count+1;
        }
       
      }
       printf(" %d " ,count);
 }
