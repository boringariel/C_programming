#include <stdio.h>
#include <stdlib.h>

/*
동적 할당 알아보기 (2)
동적 할당을 이용해 정수 배열을 만들어 보자
*/
void main()
{
	int *ptr, num, i;

	printf("몇 개의 정수를 입력할까요?: ");
	scanf("%d", &num);

	ptr = (int*)malloc(sizeof(int) * num);
	/*
	int 자료형의 기본 저장공간(4바이트)*num 만큼의 메모리를 할당한다는 뜻이다
	따라서, int 자료형을 num개만큼 저장할 수 있는 공간의 메모리를 할당하는 효과를 가진다
	*/


	if (ptr == NULL)
	{
		printf("메모리를 할당하지 못했습니다!\n");
		exit(1);
	}

	for (i = 0;i < num;i++)
	{
		printf("%d번째 정수를 입력하세요: ", i + 1);
		scanf("%d, ", &ptr[i]); //일반적인 배열과 같이 입력할 수 있다
	}

	printf("\n저장된 정수 출력\n");
	for (i = 0;i < num;i++)
	{
		printf("%d, ", *(ptr+i));
	}
	printf("\n");

	free(ptr);

	system("pause");
}

/*
이와 같이 동적 할당된 포인터를 이용해 배열과 같이 입출력이 가능하다
다른 자료형의 경우, malloc 함수에 함께 사용하는 자료형을 변경하면 손쉽게 작성할 수 있을 것이다
*/