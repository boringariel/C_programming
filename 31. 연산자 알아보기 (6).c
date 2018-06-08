#include <stdio.h>
#include <math.h> //수식함수 라이브러리를 불러오는 구문이다

#define numbers 5

/*
연산자 알아보기 (6)
연산자와 수식함수를 이용해
평균, 분산, 표준편차를 계산해 보자
*/
void main()
{
	double data[numbers + 3] = { 0 };
	/*8개의 데이터를 저장할 수 있는 data 문자열을 정의한다
	여기서 5개는 실수를 저장하고,
	나머지 3개는 평균, 분산, 표준편차의 순으로 저장할 것이다
	*/

	double sum = 0, vSum = 0;
	int i;

	for (i = 0;i < numbers;i++)
	{
		printf("%d, 실수를 입력하세요 : ", i + 1);
		scanf("%lf", &data[i]);
		sum += data[i];
	}
	data[5] = sum / numbers;//평균 구하기

	for (i = 0;i < numbers;i++)
	{
		vSum += (data[i] - data[numbers])*(data[i] - data[numbers]);
		//각 편차의 제곱을 계산하고, 그 합을 vSum에 저장한다
	}
	data[numbers + 1] = vSum / numbers; //분산 구하기
	data[numbers + 2] = sqrt(data[6]); //표준편차 구하기. sqrt(값)는 제곱근을 구하는 함수이다
	
	printf("\n입력한 값\n");
	for (i = 0;i < numbers;i++)
	{
		printf("%.2lf, ", data[i]); //입력한 값을 소수 둘째자리까지 반올림해 출력
	}

	printf("\n평균: %lf \n", data[numbers]);//평균 출력
	printf("\n분산: %f \n", data[numbers + 1]);//분산 출력
	printf("\n표준편차: %f \n", data[numbers + 2]);//표준편차 출력

	system("pause");
}