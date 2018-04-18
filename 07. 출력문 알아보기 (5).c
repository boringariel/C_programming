#include <stdio.h>

/*
출력문 알아보기 (5)
저장된 값을 출력할 수 있는 프로그램을 만들어 보자
*/

void main()
{
	char gender; //성별을 저장하는 문자형 변수 gender
	int age; //나이를 저장하는 정수형 변수 age
	double height; //키를 저장하는 실수형 변수 height

	gender = 'w';
	age = 26;
	height = 165.7;

	printf("성별: %c, 나이: %d, 신장: %lf \n", gender, age, height);
	//%c는 문자형 변수를, %d는 정수형 변수를, %lf는 실수형 변수를 출력하는 기호이다. 해당하는 변수를 출력문 뒤에 써넣는게 기본 형식

	system ("pause");
}