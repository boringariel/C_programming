#include <stdio.h>

//입력문 알아보기

void main()
{
	char gender;
	int age;
	double height; //각 변수 선언

	printf("성별(남: m, 여: w)?: "); //입력을 유도하는 안내문 출력
	scanf("%c", &gender); //입력문. 출력문에 변수를 할당할 때와 같이 작성하나, 변수의 이름 앞에 '&'을 붙여야 한다

	printf("나이?: ");
	scanf("%d", &age);

	printf("신장?: ");
	scanf("%lf", &height);

	printf("\n 성별: %c, 나이: %d, 신장: %lf \n", gender, age, height);
	
	system("pause");
}