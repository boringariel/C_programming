#include <stdio.h>
#include <stdlib.h>

/*
포인터 알아보기 (2)
포인터와 주소의 관계, 그리고 주소연산자와 역참조연선자의 관계를 알아보자
*/
main()
{
	int number;
	int *ptr;

	printf("\n정수를 입력하세요: ");
	scanf("%d", &number);
	printf("입력한 정수 number의 주소: %d\nnumber의 값: %d\n", &number, number);
	//주소연산자(&)는 변수의 주소를 나타내며, 이는 변수에 할당된 값과 다르다

	printf("\n정수를 한번 더 입력하세요: ");
	ptr = &number; //포인터에 number의 주소를 입력시킴
	scanf("%d", ptr);

	printf("포인터 ptr의 주소: %d\nptr의 값: %d\nptr이 가리키는 곳의 값: %d\n", &ptr, ptr, *ptr);
	printf("\n입력한 정수 number의 주소: %d\nnumber의 값: %d\n", &number, number);
	/*
	포인터는 자신에게 특정 변수의 주소를 할당할 수 있다
	포인터는 역참조연산자(*)를 이용하면 자신이 참조하는 주소가 가진 값을 표시할 수 있으며, 이는 원래 변수의 값과 동일하다

	변수는 값이 바뀌더라도 주소가 바뀌지 않는다
	*/

	system("pause");
}