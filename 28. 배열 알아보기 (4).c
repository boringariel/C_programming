#include <stdio.h>

/*
배열 알아보기 (4)
sizeof 함수를 이용한 배열 크기 구하기
배열 크기는 선언함에 따라 유동적으로 변할 수 있다.
이를 sizeof 함수를 이용해 알아서 크기를 구할 수 있도록 해 보고,
이를 활용해 배열의 원소를 역순으로 출력하는 프로그램을 만들어 보자
*/
void main()
{
	int x[] = { 10,20,30,40,50,60,70,80,90,100 }, y[20], i, size; //x 배열의 경우, 원소의 추가/제거에 따라 크기가 변할 수 있다

	size = sizeof(x) / sizeof(x[0]);
	/*
	x 배열의 열 수를 구한다
	sizeof(x) 함수는 x가 몇 바이트인지 반환하며,
	sizeof(x) / sizeof(x[0]) 식으로 활용하면
	(배열 x의 크기)/(배열 x에서 원소 하나의 크기) 로 연산되기 때문에 x의 원소 개수를 얻을 수 있다
	자세한 내용은 아래 출력문을 참고해 보자
	*/

	printf("sizeof(x): %d\nsizeof(x[0]): %d\nsizeof(x) / sizeof(x[0]): %d\n", sizeof(x), sizeof(x[0]), size);

	for (i = 0;i < size;i++)
	{
		y[size - i - 1] = x[i]; //x배열의 원소를 y 배열에 역순으로 대입한다
	}

	for (i = 0;i < size;i++)
		printf("x[%d]: %d, y[%d]: %d \n", i, x[i], i, y[i]);
	//배열 x와 배열 y의 원소를 서로 대조하며 출력한다

	system("pause");
}