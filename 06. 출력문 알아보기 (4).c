#include <stdio.h>

//출력문 알아보기(4)

void main()
{
	printf("안녕 ");
	func1();
	printf("! \n");

	system("pause");
}

func1()
{
	printf("여러분");
}

/*
함수를 이용해서 출력문을 조합할 수 있다
별도의 함수에서 출력된 문장도 줄바꿈 기호를 사용하지 않으면 한 줄로 출력됨에 유의
*/