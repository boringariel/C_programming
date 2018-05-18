#include <stdio.h>

/*
포인터 알아보기 (2)
포인터를 이용해 프로그램을 만들어 보자
문자열의 대소문자를 서로 변환하는 프로그램을 만들어 보자
*/
void main()
{
	char str[50] = "BoringAriel."; //바꿀 문자열 str[]
	char newStr[50] = ""; //바뀐 문자열을 저장할 newStr[]
	char *ptr = str, *ptr2 = newStr; //포인터 초기화
	int i = 0;

	printf("before: ");
	while (*ptr)
	{
		if (*ptr >= 65 && *ptr <= 90)
			newStr[i] = *ptr + 32;
		else if (*ptr >= 95 && *ptr <= 122)
			newStr[i] = *ptr - 32;
		else
			newStr[i] = *ptr;
		i++;

		printf("%c", *ptr++);
	}
	/*
	기존 문자열을 표시함과 동시에, 대소문자를 변환하여 newStr[]로 저장하는 소스코드이다
	아스키코드 상에서 대문자는 65~90, 소문자는 95~122 범위에 위치한다
	따라서, 이 값들의 차이인 32를 더하거나 빼는 방식으로 대소문자 변환이 가능하다
	*/

	printf("\n\n대소문자를 서로 바꿨습니다.\n\n");

	
	printf("after: ");
	while (*ptr2)
	{
		printf("%c", *ptr2++);
	}//포인터를 이용해 바뀐 문자열을 출력한다
	printf("\n");

	system("pause");
}