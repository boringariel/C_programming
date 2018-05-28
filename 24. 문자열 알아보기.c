#include <stdio.h>
#include <string.h> //문자열 관련 함수를 이용하기 위해서는 이 구문을 적어야 한다

/*
문자열 알아보기
문자열의 초기화와 출력에 대해 알아보자
*/

void main()
{
	char str[20] = "boringariel";
	/*
	문자열은 char str[(문자열 길이를 초과하는 수)] = "내용"; 으로 초기화한다
	문자열의 맨 끝에는 '\0'이 들어가게 된다
	*/

	int i;
	for (i = strlen(str) - 1; i >= 0; i -= 2)
		printf("%c", str[i]);
	/*
	문자열의 길이(문자 수)를 구하는 함수: strlen(문자열)
	'\0'(NULL 문자)는 포함되지 않는다.
	
	문자열의 길이 - 1 (프로그래밍시에는 0부터 카운팅할 필요가 있기 때문)부터 0까지 범위 내에서,
	2씩 감소하는 i를 이용해 문자열 출력. 따라서 'lianrb'가 출력된다
	*/

	printf("\n");

	system("pause");
}