#include <stdio.h>

/*
매크로 상수에 대해 알아보자
매크로 상수는 특정 값을 치환하는 기능을 제공한다
*/

#define TRUE 1 //매크로 상수 정의. '='나 ';'를 사용하지 않음에 유의
#define FALSE 0

int main()
{
	int true = 1; //변수 정의. 매크로 상수 TRUE와 다름에 유의
	int false = 0;

	printf("TRUE: %d, FALSE: %d \n", TRUE, FALSE); //매크로 상수는 변수처럼 호출할 수 있다
	printf("true: %d, false: %d \n", true, false);
	
	true = 2;
	false = 3;

	printf("true: %d, false: %d \n", true, false);
	system("pause");
}

/*
실행결과
TRUE: 1, FALSE: 0
true: 1, false: 0
true: 2, false: 3

이를 참고해 매크로 상수와 변수의 차이를 확인하라
*/