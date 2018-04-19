#include <stdio.h>

/*
제어문 알아보기 (4)
제어문의 일종인 while문을 알아보자
*/

int main()
{
	char ch;

	ch = 'A'; //문자 'A'는 아스키코드로 97번이다
	while (ch <= 'Z') //ch가 'Z'보다 같거나 작은 경우 반복문을 진행한다
	//문자 'Z'는 아스키코드로 122번이다. 따라서 문자를 이용한 대수비교가 가능하다
	
		printf("%c ", ch++);
	//ch를 출력한 뒤, ch를 1 증가시킨다 아스키코드 값이 증가하므로 ch는 이후 다른 문자로 출력될 것이다
	
	printf("\n");

	system("pause");
}