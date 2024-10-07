#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0;
	printf("Please enter a number: ");
	scanf("%d",&n);

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			goto not_prime;
		}
	}
	goto prime;

prime:
	printf("It is a prime number.");
	goto end;

not_prime:
	printf("It is not a prime number.");
	goto end;

end:
	return 0;
}