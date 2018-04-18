#include <stdio.h>

/*
변수 알아보기
원의 면적과 둘레를 구하는 프로그램을 통해 변수의 특징에 대해 알아보자
*/

int main(void)
{
	const float PI = 3.14159; //상수화된 변수 선언. 이 변수는 수정할 수 없다
	int radius; //일반 변수 선언. 이 변수는 수정할 수 있다

	radius = 7;
	printf("반지름이 %d인 원의 면적: %lf \n", radius, radius*radius*PI); //변수는 연산이 가능하다
	printf("반지름이 %d인 원의 둘레: %lf \n", radius, radius*2*PI);

	radius = 10; //변수는 값을 바꿀 수 있다
	//PI=3.1; //이 코드는 오류를 일으킨다. 상수화된 변수는 수정할 수 없기 때문이다

	printf("반지름이 %d인 원의 면적: %lf \n", radius, radius*radius*PI);
	printf("반지름이 %d인 원의 둘레: %lf \n", radius, radius * 2 * PI);

	system("pause");
}