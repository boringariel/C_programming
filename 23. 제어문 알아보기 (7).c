#include <stdio.h>

/*
제어문 알아보기 (7)
제어문의 일종인 do-while 문을 알아보지
*/

void main()
{
	int i = 1;
	do { //do 코드블럭 부분은 우선 1회 시작된다
		printf("%d ", i);
		i++;
	} while (i <= 10); //while 조건이 만족하는 한, do 코드블럭 안의 코드는 반복된다
	printf("\n");

	system("pause");
}