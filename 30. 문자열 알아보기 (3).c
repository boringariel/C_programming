#include <stdio.h>
#include <string.h>

/*
문자열 알아보기 (3)
사용자에게서 문자열을 입력받아 보자
문자열을 이용해 간단한 메모 프로그램을 만들어 보자
*/
void main()
{
	char memo[10][100]; //최대 100자의 글자를 10개까지 저장할 수 있는 memo 배열 선언
	int i, Cn;

	for (i = 0;i < 10;i++)
	{
		printf("%d번째로 입력한 메모 ('exit'를 적으면 종료): ", i + 1);
		gets(memo[i]); //memo 배열에 문자열을 입력받는다
		if (strcmp(memo[i], "exit") == 0) {
		/*
		strcmp(문자열1, 문자열2) 함수는 두 문자열을 비교한다
		두 문자열이 같은 경우 0
		앞 문자열이 큰 경우 양수
		앞 문자열이 작은 경우 음수를 반환한다
		문자열 비교는 아스키코드를 기준으로 한다
		여기서는 "exit"를 입력한 경우 프로그램을 종료하도록 한다
		*/
			break;
		}
	}

	printf("\n메모한 내용: \n");

	for (i = 0;i < 10;i++)
	{
		if (strcmp(memo[i], "exit") == 0) //"exit"가 나올 때까지 입력 내용을 출력한다
		{
			break;
		}
		printf("%-100s\n", memo[i]);
		//"%-100s"는 문자열을 100자짜리 공간에 출력하고, 남는 공간은 뒤에 공백으로 남기게 하는 명령이다
	}
	printf("\n");
	system("pause");
}