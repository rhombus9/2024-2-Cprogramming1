#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bin(int n) {
	if (n < 2) {
		return n;
	}
	else {
		return bin(n / 2) * 10 + n % 2;
	}
}

int main(void) {
	printf("Please enter a number: ");
	int n = 0;
	scanf("%d", &n);
	printf("%d",bin(n));

	return 0;
}