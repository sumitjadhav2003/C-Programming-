#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, remainder;

  
    printf("Enter a number: ");
    scanf("%d", &num);


    
    while (num != 0) {
        remainder = num % 10;            
        reversed = reversed * 10 + remainder; 
        num = num / 10;                    
    }

    originalNum = num;
    if (originalNum == reversed) {
        printf("%d is a palindrome number\n", originalNum);
    } else {
        printf("%d is not a palindrome number\n", originalNum);
    }

    return 0;
}
