#include <stdio.h>

/*
제어문 알아보기 (2)
제어문의 일종인 switch문을 알아보자
switch문을 이용해 학점 구하기 프로그램을 만들어 보자
*/

void main()
{
	int score;
	printf("점수? ");
	scanf("%d", &score); //점수를 score 변수에 입력받는다

	switch (score / 10) //(score/10)의 값을 구한다. 둘 다 정수이므로 소수점 아래 값은 버린다
	{
	case 10: //10인 경우 => score가 100인 경우. 아래에 코드가 없으므로 다음 조건으로 넘어간다
	case 9:	printf("A 학점\n"); //9인 경우 => 앞서 계산한 값에 따르면 90점 이상인 경우 A 학점을 할당한다
		break;
		//break는 아래 내용을 무시하고 빠져나온다는 의미이다. 아래 내용이 필요없어진 경우 사용한다

	case 8:	printf("B 학점\n");
		break;
	case 7:	printf("C 학점\n");
		break;
	case 6:	printf("D 학점\n");
		break;
	default: printf("과락 \n"); //기본값. 위 코드의 break 때문에 아무 조건도 만족하지 못할 경우 출력된다

		printf("당신의 점수: %d \n", score);
		break;
	}
	printf("End. \n");

	system("pause");
}