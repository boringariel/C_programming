#include <stdio.h>

/*
포인터 알아보기 (5)
포인터를 이용한 연산의 특징에 대해 알아보자

특정 함수 내에서 선언된 변수(지역변수)는 다른 함수에서 값을 변경할 수 없다
하지만, 포인터를 이용해 지역변수에 접근한다면 다른 함수에서도 값을 변경할 수 있다
이 특징을 이용해 두 변수의 값을 교체하는 프로그램을 작성해 보자
*/
void swap1(int x, int y); //일반적인 swap1 함수 선언
void swap2(int *x, int *y); //포인터를 사용하는 swap2 함수 선언

void main()
{
	int x = 46, y = 91;
	printf("main 함수에서의 x: %d, y: %d \n\n", x, y);

	swap1(x, y);
	printf("swap1 함수 호출 수 main 함수에서의 x: %d, y: %d \n\n", x, y);

	swap2(&x, &y);
	printf("swap2 함수 호출 수 main 함수에서의 x: %d, y: %d \n\n", x, y);

	system("pause");
}

void swap1(int x, int y)
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
	/*
	여기에서 x, y는 swap1 함수에서만 동작하는 지역변수이다
	따라서, swap1 함수에서 변경된 x, y는 main 함수에서 반영되지 않는다
	*/
}

void swap2(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
	/*
	여기에서 *x, *y는 각각 main 함수에서의 x, y의 주소를 나타낸다
	따라서, swap2 함수에서 변경된 *x, *y는 main 함수의 x, y의 주소가 서로 바뀌는 결과로 나타난다
	*/
}