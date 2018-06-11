#include <stdio.h>

#define NUMBER 3

struct JUMP
{
	char name[20];
	int first;
	int second;
	int third;
	float avg;
}; //이름, 1/2/3차시기, 평균 순서로 저장

void heading();

/*
파일 입출력 알아보기 (3)
구조체를 이용한 다양한 형식을 포함한 파일 출력을 알아보자

세 명의 멀리뛰기 기록을 보여주고, 평균을 계산한 뒤 저장하는 프로그램을 만들어 보자
*/
void main()
{
	struct JUMP jump[NUMBER] =
	{
		{ "아추어",123,108,116 },
		{ "아차거",132,144,100 },
		{ "아득어",109,96,116 },
	}; //이름과 기록을 작성

	int i;
	FILE *fp;

	for (i = 0;i < NUMBER;i++)
		jump[i].avg = (float)(jump[i].first + jump[i].second + jump[i].third) / 3; //평균 계산

	heading();

	for (i = 0;i < NUMBER;i++)
		printf("%s, %3d, %3d, %3d, %7.2f\n", jump[i].name, jump[i].first, jump[i].second, jump[i].third, jump[i].avg); //기록과 평균 출력

	fp = fopen("기록.txt", "wt"); //파일을 쓰기 전용으로 열기

	for (i = 0;i < NUMBER;i++)
		fprintf(fp, "%s %3d %3d %3d %7.2f ", jump[i].name, jump[i].first, jump[i].second, jump[i].third, jump[i].avg);//파일 저장

	fclose(fp);

	printf("프로젝트 경로에 기록.txt 파일로 내보내기 완료!\n");

	system("pause");
}

void heading()
{
	printf("--------------------------------\n");
	printf("이름    1차  2차  3차   평균\n");
	printf("--------------------------------\n");
}
/*
프로그램 실행시 출력 내용은 heading 함수와 함께 출력되지만,
저장된 파일의 경우 출력된 내용은 무시하고 fprintf 함수의 형식으로 저장되는 것을 확인할 수 있다
*/