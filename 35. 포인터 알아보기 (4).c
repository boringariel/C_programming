#include <stdio.h>

/*
포인터 알아보기 (4)
포인터의 연산을 이용해 문자열을 역전시키는 프로그램을 만들어 보자
*/
void main()
{
	char str[50] = "boringariel";
	char *ptr;

	printf("str     : %s\n", str);

	printf("str 역순: ");

	ptr = str;
	while (*ptr)
	{
		ptr++;
	}
	ptr--;
	//포인터의 연산을 이용해, 문자열에 포함된 문자의 수를 알아낸다

	while (*ptr)
	{
		printf("%c", *ptr--);
		if (ptr < str) {
			break;
		}//포인터의 주소가 str의 주소보다 작을 경우 반복문 종료. 주소 대 주소의 비교가 가능하다
	}
	printf("\n");

	system("pause");
}