#include <stdio.h>

/*
포인터 알아보기
포인터의 기능과, 포인터를 이용한 배열의 출력을 알아보자
*/
void main()
{
	int score[21] = { 57,87,64,86,97,78,61,81,73,37,54 }, i, sum = 0, cn = 0;
	int *ptr; //포인터는 *포인터이름 형식으로 선언한다

	ptr = score; //포인터의 초기화는 주소를 대입시키는 방식으로 이루어진다

	printf("학생들의 점수\n");

	while (*ptr) //*ptr이 가리키는 원소가 '\0'이 아닌 한 계속 반복된다
	{
		sum += *ptr; //ptr은 주소를 가리키지만, *ptr은 해당 주소의 원소를 나타낸다
		printf("%d, ", *ptr++); //ptr도 덧셈, 뺄셈 연산이 가능하다
		cn++;
	}

	printf("\n인원수: %d\n", cn);
	printf("합: %d, 평균: %.2f\n", sum, (double)sum / cn);
	system("pause");
}