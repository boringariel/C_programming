#include <stdio.h>

/*
구조체 알아보기
구조체의 형식과 응용에 대해 알아보자
구조체를 이용해 학생 성적 출력 프로그램을 만들어보자
이름/국어/영어/수학/합계/평균 순으로 데이터를 저장하고 출력한다
*/
void main()
{
	struct STUDENT {
	char name[20];
	int score[3];
	int sum;
	float avg;
	};
	/*
	구조체 선언. 여러 형식을 혼용할 수 있으며, 각 형식은 미리 지정한다
	구조체 선언시에는 고유한 자료형(여기서는 STUDENT)을 지정한다
	*/

	struct STUDENT fish = { "외눈박이 물고기",80,64,98 }; //구조체 초기화. 일부 값만 초기화할 수 잇으며, 배열과 유사하게 입력한다
	int i;

	for (i = 0;i < 3;i++)
		fish.sum += fish.score[i]; //합계 입력

	fish.avg = (float)(fish.sum / i); //평균 입력

	printf("이름: %s\n국어 점수: %d\n영어 점수: %d\n수학 점수: %d\n점수 합계: %d\n점수 평균: %.2f\n", fish.name, fish.score[0], fish.score[1], fish.score[2], fish.sum, fish.avg);
	//구조체의 출력도 배열과 유사하다. 단, 출력문에서 각 원소에 대한 형식을 알맞게 지정해야 한다
	
	system("pause");
}