#include <stdio.h>

/*
매크로 상수 알아보기 (2)
매크로 상수와 연산자를 이용해 단위변환 프로그램을 만들어 보자
*/

#define FEET 30.48 //1피트는 30.48cm이다
#define YARD (FEET*3) //1야드는 3피트이다
#define INCH 2.54 //1인치는 2.54cm이다
//각 단위를 매크로 상수로 지정함

void main()
{
	int yard;

	printf("길이의 기본단위인 야드(yard) 입력? ");
	scanf("%d", &yard);

	printf("%d yard는 feet로 %.2f\n", yard, yard*YARD/FEET);
	printf("%d yard는 inch로 %.2f\n", yard, yard*YARD/INCH);
	printf("%d yard는 cm로 %.2f\n", yard, yard*YARD); //매크로 상수는 연산자를 이용해 계산할 수 있다

	system("pause");
}