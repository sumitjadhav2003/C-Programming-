#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;      
        int sum = 0;

    while (n > 0) {
        int rem = n % 10;
        sum += rem * rem * rem; 
    }

    if (sum == temp) {
        printf("%d is an Armstrong number\n", temp);
    } else {
        printf("%d is not an Armstrong number\n", temp);
    }

    return 0;
}
