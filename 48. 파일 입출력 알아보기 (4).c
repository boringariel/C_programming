#include <stdio.h>

struct JUMP
{
	char name[20];
	int first;
	int second;
	int third;
	float avg;
};

void heading();

/*
파일 입출력 알아보기 (4)
내보내기한 파일을 읽어들일 수 있도록 프로그램을 작성해 보자

'파일 입출력 알아보기 (3).c' 파일을 기반으로,
해당 파일에서 내보내기한 '기록.txt'를 불러올 수 있는 프로그램을 작성한다
*/
void main()
{
	struct JUMP jump[10];
	int i, result;
	FILE *fp;

	fp = fopen("기록.txt", "rt"); //파일 불러오기 (읽기 전용)

	if (fp == NULL)
	{
		printf("파일을 열지 못했습니다!\n");
		exit(1);
	}
	
	heading();

	i = 0;
	while (1)
	{		
		result = fscanf(fp, "%s %3d %3d %3d %9f ", &jump[i].name, &jump[i].first, &jump[i].second, &jump[i].third, &jump[i].avg);
		//내보내기했을 때와 같은 형식으로 불러올 수 있다. (단, 실수 형식의 소숫점 아래 자릿수 지정은 제외)

		if (result == EOF)
			break;

		printf("%s, %3d, %3d, %3d, %7.2f\n", jump[i].name, jump[i].first, jump[i].second, jump[i].third, jump[i].avg);
		//불러온 파일을 출력하는 경우, 기존의 형식대로 출력할 수 있다

		i++;
	}

	system("pause");
}

void heading()
{
	printf("--------------------------------\n");
	printf("이름    1차  2차  3차   평균\n");
	printf("--------------------------------\n");
}