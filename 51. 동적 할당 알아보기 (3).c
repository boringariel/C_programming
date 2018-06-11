#include <stdio.h>
#include <stdlib.h>

/*
동적 할당 알아보기 (3)
동적 할당에 사용되는 calloc 함수에 대해 알아보고,
입력된 정수와 이들의 합을 구하는 프로그램을 작성해 보자
*/
void main()
{
	int *ptr, num, i;

	printf("몇 개의 정수를 입력할까요?: ");
	scanf("%d", &num);

	ptr = (int*)calloc(num + 1, sizeof(int) * (num + 1));
	/*
	calloc 함수를 이용한 동적 할당
	malloc과 같은 기능을 수행하나, 다른 형태를 가진다
	calloc(A,B) 형태를 가지며, A는 저장할 개수, B는 저장할 메모리 크기이다
	calloc 함수는 할당된 공간을 0으로 초기화하는 특징을 가진다

	ptr[num+1] 공간은 합계를 저장하기 위해 추가로 할당하였다
	*/

	if (ptr == NULL)
	{
		printf("메모리를 할당하지 못했습니다!\n");
		exit(1);
	}

	for (i = 0;i < num;i++)
	{
		printf("%d번째 정수를 입력하세요: ", i + 1);
		scanf("%d, ", &ptr[i]);
		ptr[num + 1] += ptr[i]; //calloc 함수에 의해 0으로 초기화되었기 때문에 별도의 초기화 없이 덧셈이 가능하다
	}

	printf("\n저장된 정수 출력\n");
	for (i = 0;i < num;i++)
	{
		printf("%d, ", *(ptr + i));
	}
	printf("\n저장된 정수들의 합: %d\n", ptr[num + 1]);

	free(ptr);

	system("pause");
}
/*
'동적 할당 알아보기 (2).c' 파일을 기반으로 해
calloc 함수와 배열의 특징을 이용한 프로그램을 작성해 보았다
*/