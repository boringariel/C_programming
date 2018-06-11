#include <stdio.h>

/*
파일 입출력 알아보기 (2)
파일 입력을 통해 외부 파일의 내용을 표시하는 프로그램을 만들어 보자
*/
void main()
{
	char input;
	FILE *fp;

	fp = fopen("문자.txt", "rt"); //프로젝트 경로에서 '문자.txt'파일을 읽기 전용으로 가져오기

	if (fp == NULL) //읽기 상태일 때는 파일이 없을 경우 NULL이 반환된다
	{
		printf("파일을 열지 못했습니다!\n");
		exit(1);
	}

	while ((input = fgetc(fp)) != EOF) //파일 읽기의 경우, 맨 마지막 문자 이후에는 EOF를 반환한다
	{
		printf("%c", input); //파일에서 문자를 하나씩 읽어 표시한다
	}
	printf("\n");

	fclose(fp);

	system("pause");
}
//프로젝트 경로에 임의의 문자를 적은 '문자.txt' 파일을 저장하면, 파일 내용이 그대로 출력된다