#include <stdio.h>

int main(void) {
	for (int i = 1; i < 6; i++) {
		for (int j = 0; j < 5-i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}