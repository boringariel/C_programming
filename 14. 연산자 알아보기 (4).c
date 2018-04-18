#include <stdio.h>

/*
연산자 알아보기 (4)
간단한 방정식을 작성해 보자
*/

void main()
{
	double x, result;

	printf("x? ");
	scanf("%lf", &x); //변수 x를 입력받는다

	result = (5 * x*x*x) + (6 * x*x) + (7 * x);
	//이는 result = 5x^3 + 6x^2 + 7x 와 같은 계산식이다

	printf("result: %lf\n", result);

	system("pause");
}