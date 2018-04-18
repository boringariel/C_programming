#include <stdio.h>

//함수의 작성과 실행 순서 알아보기

void func1(void); //func1()이라는 함수를 선언

void main() //main()함수
{
	printf("main() start!!! \n"); //main()함수가 시작됨을 알림
	printf("main() end!!! \n"); //main()함수가 종료됨을 알림

	system("pause");
}

void func1(void)
{
	printf("func1() start!!! \n"); //func1() 함수가 시작됨을 알림
	printf("func1() end!!! \n"); //func1() 함수가 종료됨을 알림
}

//실행 결과를 살펴보면, 함수를 작성했더라도 호출하지 않았을 경우 실행되지 않음을 확인할 수 있다