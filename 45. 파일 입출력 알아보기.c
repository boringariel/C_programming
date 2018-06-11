#include <stdio.h>

/*
파일 입출력 알아보기
외부 파일로 데이터를 출력하는 프로그램을 만들어 보자
*/
void main()
{
	char code = 48; //아스키 코드 48번(0)으로 code를 초기화
	FILE *fp; //파일 포인터

	fp = fopen("숫자.txt", "wt"); //프로젝트 경로에서 '숫자.txt'파일을 쓰기 전용으로 열기

	while (code <= 57) //아스키 코드 57번(9)가 될 때까지
	{
		fputc(code, fp); //fputc(a,b) 함수는 a를 b 주소에 쓰는 파일 함수이다
		code++;
	}

	fclose(fp); //파일 닫기

	printf("파일 저장 완료! 프로젝트 경로에서 확인해 보세요.\n");

	system("pause");
}

//프로그램을 실행한 뒤, 프로젝트 경로로 접속하면 '0123456789' 가 저장된 숫자.txt 파일을 확인할 수 있다