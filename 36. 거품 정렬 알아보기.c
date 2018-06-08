#include <stdio.h>

/*
거품 정렬 알아보기
거품 정렬(버블 정렬, bubble sort)은 인접한 두 값을 비교해서 정렬할 수 있는 알고리즙이다
동작이 비효율적이지만, 코드가 간단하기 때문에 알아두면 좋을 것이다
*/
#define sorting_size 5

void main()
{
	double number[sorting_size], tmp;
	int i, j;

	for (i = 0;i < sorting_size;i++)
	{
		printf("실수를 입력하세요(%d/5): ", i + 1);
		scanf("%lf", &number[i]);
	}

	printf("\n입력된 실수(소수점 아래 두 자리까지만 표시함)\n");
	for (i = 0;i < sorting_size;i++)
		printf("%.2lf, ", number[i]);
	printf("\n");

	for (i = 0; i < sorting_size - 1; i++)
	{
		for (j = 0; j < sorting_size - 1; j++)
		{
			if (number[j] < number[j + 1])
			{
				tmp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = tmp;
			}
			//내림차순 거품 정렬을 반복문으로 구현하였다. 정렬 기준을 반전시키면 오름차순으로 구현할 수 있다
		}
	}

	printf("\n내림차순으로 정렬된 실수\n");
	for (i = 0;i < sorting_size;i++)
		printf("%.2lf, ", number[i]);
	printf("\n");

	system("pause");
}