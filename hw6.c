#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[5];
	printf("Please input five integers: ");
	scanf("%d %d %d %d %d",&num[0], &num[1], &num[2], &num[3], &num[4]);
	printf("Odd numbers: ");
	for (int i = 0; i < 5; i++) {
		if (num[i] % 2 == 1) {
			printf("%d ", num[i]);
			num[i] = 1;
		}
	}
	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++) {
		if (num[i] != 1)
			printf("%d ", num[i]);
	}
	return 0;
}