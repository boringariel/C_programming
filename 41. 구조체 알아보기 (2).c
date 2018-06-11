#include <stdio.h>

/*
구조체 알아보기 (2)
구조체와 포인터를 함께 이용해보자

구조체의 구성요소에 접근할 때는 '.'을 사용한다
하지만, 구조체 포인터를 사용할 경우, 구조체 포인터 연산자 '->'를 사용함에 유의하라

구조체 알아보기.c 파일을 기반으로 해서, 포인터를 사용하도록 변경한다
*/
void main()
{
	struct STUDENT {
		char name[20];
		int score[3];
		int sum;
		float avg;
	};

	struct STUDENT fish = { "외눈박이 물고기",80,64,98 };
	struct STUDENT *ptr; //구조체 포인터 변수 ptr 선언
	int i;

	ptr = &fish; //구조체 포인터 변수에 참조할 주소 저장. 배열과 달리 주소연산자를 사용함에 유의

	for (i = 0;i < 3;i++)
		ptr->sum += ptr->score[i];
		//fish.sum += fish.score[i]; (기존 코드) 와 비교해보라

	fish.avg = (float)(fish.sum / i);

	printf("%s, %d, %d, %d, %d, %.2f\n", ptr->name, ptr->score[0], ptr->score[1], ptr->score[2], ptr->sum, ptr->avg);
	//출력문에서도 포인터를 이용한 접근이 가능하다

	system("pause");
}