#include <stdio.h> // 헤더파일 선언



//함수 선언
int func(int x) {
	return 3 * x + 4;
}

int main(void) //main 함수의 시작
{
	/*
	이 함수 내에서는 하나의 문자열을 출력한다.
	문자열은 모니터로 출력된다.
	*/
	printf("Hello world! \n");	//문자열의 출력
	printf("%d\n", func(3));
	printf("%d is my point \n", 100); //print 함수
	printf("\n");

	printf("연습문제 02-01\n"); //연습문제 02-01
	printf("홍길동\n홍 길 동\n홍  길  동\n");
	printf("\n");

	printf("연습문제 02-02\n"); //연습문제 02-02
	printf("이름: 이정우\n");
	printf("주소: 대한민국, 서울특별시\n");
	printf("전화번호: 010-2894-2229\n");
	printf("\n");

	printf("개념 확인 과제\n"); //개념 확인 과제
	printf("C프로그래밍 1주차 과제\n이름: 이정우\n학번: %d\n", 202410882);
	return 0;	// 0의 반환
}	//main 함수의 끝

