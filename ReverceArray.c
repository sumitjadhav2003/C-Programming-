//Write a program to reverse an array of 5 integers.
#include <stdio.h>

int main() {
    int arr[6] = {2, 3, 4, 5, 6, 7};
    int n = 6;

    printf("Before reverse:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("After reversing:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
