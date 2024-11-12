#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double stdDv(int num[]) {
	int i;
	double avrg=0, rslt=0;
	for (i = 0; i < 5; i++)
		avrg += num[i];
	avrg /= 5;
	for (i = 0; i < 5; i++)
		rslt += pow(num[i]-avrg, 2);
	return sqrt(rslt / 5);
}

int main(void) {
	int num[5];
	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	printf("Standard Deviation = %.3f", stdDv(num));
	return 0;
}