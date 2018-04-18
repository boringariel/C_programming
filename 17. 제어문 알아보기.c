#include <stdio.h>

/*
제어문 알아보기
제어문의 일종인 if-else문을 알아보자
*/

int main(void)
{
	int num;
	printf("input number? ");
	scanf("%d", &num); //num을 입력받음

	if (num >= 0) { //num이 0 이상이라면
		printf("positive \n");
	} //실행할 내용
	else { //if문이 거짓이라면
		printf("negative \n");
	} //실행할 내용

	printf("quit...\n");

	system("pause");
}