#include <stdio.h>

int function(int array[]);

/*
포인터 알아보기 (6)
입력받는 데이터의 특성과 포인터의 활용에 대해 알아보자
*/
void main()
{
	int num[5] = { 2,4,6,8,10 }, i;

	function(num);

	system("pause");
}

int function(int array[])
{
	int i;

	printf("배열의 sizeof 함수 반환값: %d \n", sizeof(array));
	//함수에서 배열을 입력받을 경우, 배열 자체가 아닌 배열의 주소를 입력받게 된다. 따라서 sizeof(tmp)는 4가 출력된다

	printf("배열의 원소들: ");
	for (i = 0;i < 5;i++)
		printf("%d, ", *(array + i));
	//배열의 주소를 입력받는 특성상, 역참조연산자를 이용할 수 있다

	printf("\n");
}