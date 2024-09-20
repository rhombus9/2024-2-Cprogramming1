#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//변수를 이용한 데이터의 저장
	int num;
	num = 20;
	printf("%d \n",num);
	printf("\n");

	//변수의 다양한 선언 및 초기화 방법
	int num1, num2;
	int num3 = 30, num4 = 40; //변수 선언 및 초기화
	//printf("num1: %d, num2: %d\n",num1,num2); //오류발생: 초기화되지않은 변수 사용시 오류메세지 출력
	num1 = 10;
	num2 = 20;
	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);
	printf("\n");

	//변수의 자료형
	char a='a'; //8비트 자료형
	printf("char: %c , int: %d \n", a, a);
	short s = 'a'; //16비트 자료형
	//int 32비트
	//long 32/64비트
	//long long / __int64
	//float 32
	//double 64
	printf("\n");

	//덧셈 프로그램의 완성
	num1 = 3, num2 = 4;
	int result = num1 + num2;
	printf("덧셈 결과: %d \n", result);
	printf("%d+%d=%d \n",num1,num2,result);
	printf("%d와(과) %d의 합은 %d입니다. \n", num1,num2,result);
	printf("\n");

	//대입 연산자와 산술 연산자
	num1 = 9, num2 = 2;
	printf("%d+%d=%d \n",num1,num2,num1+num2);
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d*%d=%d \n", num1, num2, num1 * num2);
	printf("%d/%d=%d \n", num1, num2, num1 / num2);
	printf("%d/%d의 나머지=%d \n", num1, num2, num1 % num2);
	printf("\n");
	num1 = 2, num2 = 4, num3 = 6;
	num1 += 3; //num1 = num1 + 3;
	num2 *= 4; //num2 = num2 * 4;
	num3 %= 5; //num3 = num3 % 5;
	printf("Result: %d, %d, %d \n",num1,num2,num3);
	printf("\n");

	//부호
	num1 = +2, num2 = -4;
	num1 = -num1; //num1 *= -1;
	num2 = -num2; //num2 *= -1;
	printf("num1: %d num2: %d \n",num1,num2);
	printf("\n");

	//증가, 감소 연산자
	num1 = 12, num2 = 12;
	printf("num1=%d \n",num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n\n",num1);
	printf("num2=%d \n", num2);
	printf("++num2: %d \n", ++num2);
	printf("num2: %d \n", num2);
	printf("\n");
	num1 = 10;
	num2 = (num1--) + 2;
	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
	//printf("%d",-num1--- 1);
	printf("\n");
	
	//관계 연산자
	num1 = 10, num2 = 12;
	int result1, result2, result3;
	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	printf("\n");

	//논리 연산자
	num1 = 10, num2 = 12;
	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2>12);
	result3 = (!num1);
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	printf("\n");

	//콤마 연산자
	int number1 = 1, number2 = 2;
	printf(""), printf("");
	//num1 = 10, num2 = 12;
	//printf("%d",3-(++num1- --num2)*num1++*-num1);

	//scanf 사용
	//scanf 사용시 오류가 발생하면 #define _CRT_SECURE_NO_WARNINGS 사용
	//또는 대신 scanf_s() 사용, linux등 다른 운영체제에서는 scanf_s()사용 불가능할수 있음
	printf("세 개의 정수 입력: ");
	num1 = 0, num2 = 0, num3 = 0;
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
	printf("\n");

	//2, 8, 10 ,16진수
	num1 = 0xA7, num2 = 0x43, num3 = 032, num4 = 024;
	printf("%x(0xA7)의 10진수 정수 값: %d \n", num1, num1);
	printf("%x(0x43)의 10진수 정수 값: %d \n", num2, num2);
	printf("%o(032)의 10진수 정수 값: %d \n", num3, num3);
	printf("%o(024)의 10진수 정수 값: %d \n", num4, num4);
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d+%d=%d \n", num3, num4, num3 + num4);
	printf("\n");

	//부호가 있는 정수의 표현
	//2의 보수를 이용한 음의 정수 표현
	num1 = 5;
	num1 = ~num1; //1의 보수를 취함(반전)
	num1++; //1 더함
	printf("%d", num1); //-5
	printf("\n");
	
	//실수표현의 오차
	float numf = 0;
	double numd = 0;
	for (int i = 0; i < 100; i++) {
		numf += 0.1;
		numd += 0.1;
	}
	printf("0.1을 100번 더한 결과 \nfloat: %f , double: %f \n", numf, numd);
	printf("\n");

	//비트 연산자
	//AND 연산
	num1 = 15; // 00000000 00000000 00000000 00001111
	num2 = 20; // 00000000 00000000 00000000 00010100
	num3 = num1 & num2; //                   00000100 = 4
	printf("AND 연산의 결과: %d \n", num3);
	//OR 연산
	num1 = 15; // 00000000 00000000 00000000 00001111
	num2 = 20; // 00000000 00000000 00000000 00010100
	num3 = num1 | num2; //                   00011111 = 31
	printf("OR 연산의 결과: %d \n", num3);
	//XOR 연산
	num1 = 15; // 00000000 00000000 00000000 00001111
	num2 = 20; // 00000000 00000000 00000000 00010100
	num3 = num1 ^ num2; //                   00011011 = 27
	printf("XOR 연산의 결과: %d \n", num3);
	//NOT 연산
	num1 = 15; //    00000000 00000000 00000000 00001111
	num2 = ~num1; // 11111111 11111111 11111111 11110000 = -16
	printf("NOT 연산의 결과: %d \n", num2);
	//Shift 연산
	num = 15; // 00000000 00000000 00000000 00001111
	result1 = num << 1;
	result2 = num << 2;
	result3 = num << 3;
	printf("1칸 이동 결과: %d \n", result1);
	printf("2칸 이동 결과: %d \n", result2);
	printf("3칸 이동 결과: %d \n", result3);
	num = -16;
	printf("2칸 오른쪽 이동의 결과: %d \n", num >> 2);
	printf("3칸 오른쪽 이동의 결과: %d \n", num >> 3);
	printf("\n");

	//연습문제 3장
	//문제 3
	printf("정수 입력: ");
	scanf("%d", &num1);
	printf("제곱 계산 결과: %d \n", num1*num1);
	printf("\n");
	//문제 4
	printf("정수 2개 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("%d / %d의 몫: %d, 나머지: %d \n", num1, num2, num1 / num2, num1 % num2);
	printf("\n");
	//문제 5
	printf("정수 3개 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("(%d - %d) * (%d + %d) * (%d %% %d) = %d \n", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
	printf("\n");
	//연습문제 4장
	//문제 1
	printf("정수 입력: ");
	scanf("%d", &num1);
	printf("%d \n", ~num1+1);
	printf("\n");
	//문제 2
	printf("3 * 8 / 4 = %d \n", 3 << 3 >> 2);
	printf("\n");
	return 0;
}