#include <stdio.h>

int main() {
    int base, exponent;
    int result = 1;

    
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    
    for(int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
