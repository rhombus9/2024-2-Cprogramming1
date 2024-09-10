#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2주차 개념 확인 과제
int main(void) {
	int num1, num2;
	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);
	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
 return 0;
}