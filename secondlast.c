// Program to print the second largest number from N user inputs
#include <stdio.h>
int main() 
{
	int n, i;
	printf("Enter how many numbers: ");
	scanf("%d", &n);
	int num, max1, max2;
	max1 = max2; 
	printf("Enter %d numbers:\n", n);
	for(i = 0; i < n; i++) {
		scanf("%d", &num);
		if(num > max1) {
			max2 = max1;
			max1 = num;
		} else if(num > max2 && num < max1) {
			max2 = num;
		}
	}
	if(n < 2 )
		printf("Second largest number not found.\n");
	else
		printf("Second largest number is: %d\n", max2);
}