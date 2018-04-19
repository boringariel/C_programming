#include <stdio.h>

/*
제어문 알아보기 (6)
제어문을 이용해, 여러 수를 입력받아
최댓값과 최솟값을 출력하는 프로그램을 작성해 보자
*/

void main()
{
	int i = 1, num, max, min; //반복문에 사용할 변수 i와 입력받을 숫자 num, 최댓값 max, 최솟값 min 선언

	printf("%d, 정수입력 ? ", i);
	scanf("%d", &num);
	max = num;
	min = num; //처음 정수를 입력받고, max와 min을 처음 정수로 기준을 설정한다

	for (i = 2;i <= 5;i++) { //i를 이용한 반복문, 처음 값을 입력받았으니 4번만 반복
		printf("%d, 정수입력 ? ", i);
		scanf("%d", &num); //정수 입력받음

		if (num > max)
			max = num; //최댓값을 구하는 연산

		if (num < min)
			min = num; //최솟값을 구하는 연산

	}

	printf("최댓값: %d, 최솟값: %d\n", max, min); //결과물 출력

	system("pause");
}