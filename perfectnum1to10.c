#include <stdio.h>

int main() {
    int n, i, sum;

    printf("Perfect numbers between 1 and 10 are:\n");
    for (n = 1; n <= 10; n++) {
        sum = 0;
        // find proper divisors of n
        for (i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n && n != 1) {
            printf("%d\n", n);
        }
    }
    return 0;
}
