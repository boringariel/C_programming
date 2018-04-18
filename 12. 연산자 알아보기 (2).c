#include <stdio.h>

/*
연산자 알아보기 (2)
이전에 알아봤던 연산자와 사칙연산을 혼합해 총점/평균/등급을 구하는 프로그램을 작성해 보자
*/

void main()
{
	int kor, eng, mat, sum = 0, rank;
	float avg; //평균 avg. 평균은 실수이므로 실수로 선언했다

	printf("국어, 영어, 수학 점수를 입력하세요? ");
	scanf("%d%d%d", &kor, &eng, &mat); //점수 입력

	sum = kor + eng + mat; //총점 구하기
	avg = sum / 3.0; //평균 구하기. (정수/정수)는 정수값(소수점 버림)을 가지므로, (정수/실수)로 계산함에 주의
	
	rank = (avg >= 80 ? 1 : avg >= 60 ? 2 : 3);
	//등급 구하기. avg가 80 이상이면 1, 60 이상이면 2, 아니면 3을 할당한다

	printf("총점: %d, 평균 %.2f, 등급: %d\n", sum, avg, rank); //총점/평균/등급 출력

	system("pause");
}