#include <stdio.h>

//함수의 작성과 실행 순서 알아보기 (2)

void func1(); //func1()이라는 함수를 선언

void main() //main()함수
{
	printf("main() start!!! \n"); //main()함수가 시작됨을 알림
	
	func1(); //func1 함수를 호출함
	
	printf("main() end!!! \n"); //main()함수가 종료됨을 알림

	system("pause");
}

void func1(void)
{
	printf("func1() start!!! \n"); //func1() 함수가 시작됨을 알림
	printf("func1() end!!! \n"); //func1() 함수가 종료됨을 알림
}

/*
실행 결과를 살펴보면, 함수를 호출한 경우 호출한 라인에서 바로 함수로 넘어가는 것을 알 수 있음
함수 실행이 끝났을 때 호출한 다음 라인부터 실행된다
*/