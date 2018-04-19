#include <stdio.h>

/*
제어문 알아보기 (5)
다양한 제어문을 이용해
1. 1~N까지의 합
2. 1~N까지의 홀수의 합
3. 1~N까지의 짝수의 합
을 구할 수 있는 프로그램을 만들어 보자
*/

void main()
{
	int choice, N, Sum = 0, i, stop = 1; //프로그램 기능을 선택하는 choice, N, 합계 Sum, 반복문에 사용할 i, 프로그램 종료를 알리는 stop을 선언한다

	while (stop == 1) //stop이 1인 경우 무한 반복
	{
		printf("\n1. 1부터 N까지의 합\n");
		printf("2. 1부터 N까지 홀수의 합\n");
		printf("3. 1부터 N까지 짝수의 합\n");
		printf("4. 프로그램 종료\n");
		printf("Select? (1~4) ");
		scanf("%d", &choice); //choice 변수에 입력되는 값에 따라 프로그램 기능을 선택할 수 있게 한다

		if (choice < 1 || choice > 4) //1~4 이외의 값이 입력되었을 경우, 다시 입력받게끔 한다
			continue;
		if (choice == 4) //4가 입력된 경우, 반복문을 빠져나온(프로그램을 종료한)다
			break;

		printf("N 값 입력? ");
		scanf("%d", &N); //N 값을 입력받는다

		switch (choice)
		{
		case 1: //choice가 1인 경우 1~N 합 구하기
			for (i = 1; i <= N; i++) //i를 1로 초기화, N 이하일 경우 Sum에 i를 더한 뒤 1 증가
				Sum += i;
			break;

		case 2: //choice가 2인 경우 1~N까지 홀수 합 구하기
			for (i = 1; i <= N; i += 2) //i를 1로 초기화, N 이하일 경우 Sum에 i를 더한 뒤 2 증가
				Sum += i;
			break;
		case 3: //choice가 2인 경우 1~N까지 짝수 합 구하기
			for (i = 2; i <= N; i += 2) //i를 2로 초기화, N 이하일 경우 Sum에 i를 더한 뒤 2 증가
				Sum += i;
			break;
		}

		printf("\n1부터 %d까지 %s합: %d\n", N, choice == 1 ? "" : choice == 2 ? "홀수의 " : "짝수의", Sum); //출력문으로 결과 안내
		int choice = 0, N = 0, Sum = 0, i = 0; //사용된 변수 초기화
	}
	printf("End.\n"); //프로그램 종료 안내

	system("pause");
}