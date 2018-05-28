#include <stdio.h>
#include <string.h>

/*
문자열 알아보기 (2)
문자열 처리함수를 알아보자
*/

void main()
{
	char parts[5][15] = { "ariel","and","C","programming","!!!" };
	//최대 15자까지 적을 수 있는 문자열 5개가 배열로 초기화되어 있다

	char tmp[100] = ""; //빈 배열 선언
	int i;

	for (i = 0;i < 5;i++)
	{
		strcat(tmp, parts[i]); //parts의 각 문자열을 tmp 문자열의 끝에 추가된다
		strcat(tmp, "-"); //"-" 문자가 tmp 배열의 끝에 추가된다
	}

	printf("tmp : %s \n", tmp);
	//tmp 문자열을 출력한다. 앞서 지나온 코드에 의해 'ariel-and-C-programming-!!!-' 이라는 문자열이 출력된다

	system("pause");
}