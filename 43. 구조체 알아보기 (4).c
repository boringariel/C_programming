#include <stdio.h>
#include <ctype.h> //toupper 함수를 사용하기 위해 적어넣는다

typedef struct ADDRESS_BOOK
{
	char name[20];
	int age;
	char gender;
	char grade;
	char mobile[15];
	char address[100];
}addr; //구조체 선언

void heading();

/*
구조체 알아보기 (4)
구조체의 각 요소를 입력받아 주소록으로 출력하는 프로그램을 만들어 보자
*/
void main()
{
	addr people;

	printf("이름을 입력하세요: ");
	gets(&people.name);

	printf("나이를 입력하세요: ");
	scanf("%d%*c", &people.age); //*c는 엔터 버퍼를 없애주는 기능을 한다

	do {
		printf("성별을 입력하세요(남:M, 여:W): ");
		scanf("%c%*c", &people.gender);
		people.gender = toupper(people.gender); //소문자를 입력한 경우, 대문자로 바꾸는 기능을 한다
	} while (people.gender != 77 && people.gender != 87); //M 또는 W가 입력될 때까지 반복

	do {
		printf("회원등급을 입력하세요(A,B,C): ");
		scanf("%c%*c", &people.grade);
		people.grade = toupper(people.grade);
	} while (people.grade != 65 && people.grade != 66 && people.grade != 67); //성별 입력과 같은 방식

	printf("휴대폰 번호? ");
	gets(&people.mobile);
	printf("근무지역 주소? ");
	gets(&people.address);

	heading();

	printf("%10s, %3d, %3c, %3c, %13s, %s\n", people.name, people.age, people.gender, people.grade, people.mobile, people.address);
	//각 요소들을 출력한다

	system("pause");
}

void heading() //출력 요소의 분류를 표시한다
{
	printf("------------------------------------------------------------\n");
	printf("    성명    나이 성별 등급   휴대폰번호       고객주소\n");
	printf("------------------------------------------------------------\n");
}