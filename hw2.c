#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//3주차 개념 확인 과제
int main(void) {
	double km;
	printf("Please enter kilometers: ");
	scanf("%lf", &km);
	printf("%.1lf km is equal to %.1lf miles.", km, km / 1.609);
}