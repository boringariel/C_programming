#include <stdio.h>
#include <math.h> //제곱근을 구할 수 있는 함수 sqrt를 사용하기 위해 선언

typedef struct point{
	int x;
	int y;
}POINT; //구조체 별칭: POINT
/*
구조체 별칭 지정
구조체를 초기화할 때, 항상 'struct point' 등의 타이핑을 하기 번거롭다
이 때, 'typedef struct' 형식으로 구조체를 선언한 뒤, 마지막 중괄호 뒤 구조체 별칭을 함께 선언해주면 편리하다
*/

/*
구조체 알아보기 (3)
구조체의 별칭을 이용하는 법을 알아보고, 구조체를 이용해 두 점 사이의 거리를 구하는 프로그램을 만들어 보자
*/
void main()
{
	double distance;

	struct point start;
	POINT end;
	//구조체 변수 선언. 위와 아래의 선언 형식은 다르지만, 모두 같은 구조체를 가리킨다

	printf("점 A의 좌표(x,y)를 입력하세요: ");
	scanf("%d,%d", &start.x, &start.y); //여기서, &d,%d를 %d%d로 바꾸면 반점(,) 대신 띄어쓰기로 두 숫자를 구분하게 된다

	printf("점 B의 좌표(x,y)를 입력하세요: ");
	scanf("%d,%d", &end.x, &end.y);

	distance = sqrt((start.x - end.x)*(start.x - end.x) + (start.y - end.y)*(start.y - end.y));
	// sqrt(x) 함수는 x의 제곱근을 구할 때 사용한다

	printf("A, B 사이의 거리: %lf\n", distance);

	system("pause");
}