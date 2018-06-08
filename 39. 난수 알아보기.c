#include <stdio.h>
#include <stdlib.h>
#include <time.h> //rand 함수를 이용하기 위함

/*
난수 알아보기
난수를 만들고, 이를 그래프로 시각화하는 프로그램 만들기
참고: C언어에서 난수는 rand 함수를 이용해 만든다. 이를 사용하려면 time,h 헤더가 필요하다
*/

void main()
{
	char A[50] = "", B[50] = "", C[50] = "";
	int a_num = 0, b_num = 0, c_num = 0, i, random_num;

	srand(time(NULL));

	for (i = 1;i <= 50;i++)
	{
		random_num = rand() % 3;
		/*
		0~2 범위의 난수 생성
		무작위의 값을 생성한 뒤, 이를 3으로 나누면 나머지는 항상 0~2 사이의 값을 가진다
		이를 이용해, 난수를 생성할 때는 rand() % (원하는 개수) 를 이용하면 편리하다
		*/

		switch (random_num)
		{
		case 0:
			a_num++;
			break;
		case 1:
			b_num++;
			break;
		case 2:
			c_num++;
			break;
		}
		
		A[49] = '\0';
		B[49] = '\0';
		C[49] = '\0';
		//A, B, C 배열의 뒷부분을 '\0'으로 지정해야 배열을 표시할 때 오류를 피할 수 있다
	}

	for (i = 0; i <= a_num; i++)
	{
		A[i] = '*';
	}
	for (i = 0; i <= b_num; i++)
	{
		B[i] = '*';
	}
	for (i = 0; i <= c_num; i++)
	{
		C[i] = '*';
	}

	printf("A: %-50s | %d개, \n", A, a_num);
	printf("B: %-50s | %d개, \n", B, b_num);
	printf("C: %-50s | %d개, \n", C, c_num);
	//%-50s는 50자를 표시할 수 있는 공간(50)에 왼쪽정렬로(-) 문자(s)를 표시한다는 뜻이다

	system("pause");
}