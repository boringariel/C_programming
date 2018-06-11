#include <stdio.h>

#define STUDENT_NUMBER 3

struct STUDENT
{
	char name[20];
	char subject[5][30];
	int credit[5];
	double grade[5];
	double total;
}; //이름, 과목 5개(2차원 배열 사용), 학점, 평점, 평균평점을 저장할 수 있는 구조체 STUDENT

double calc(struct STUDENT stu);
void heading();

/*
구조체 알아보기 (5)
구조체 배열을 알아보자
구조체는 단독으로도 사용할 수 있지만, 배열 형식으로 선언할 수도 있다
이를 이용해 학생 성적 조회 프로그램을 만들어 보자
*/
void main()
{
	struct STUDENT student[STUDENT_NUMBER] = {
		{"아추어",
		"C","JAVA","파이썬","교양1","교양2",
		3, 3, 3, 2, 2,
		4.5, 4.0, 3.5, 3.0, 2.5, 2.0
		},

		{"아차거",
		"파이썬","대학수학","JAVA","DB","교양2",
		3, 2, 3, 3, 2,
		3.0, 4.5, 3.0, 2.0, 3.5, 3.0
		},

		{"아득어",
		"C","파이썬","DB","교양1","교양2",
		3, 3, 3, 2, 2,
		3.0, 4.0, 4.5, 4.5, 2.0, 3.5
		}
	};

	int i, j;
	
	heading();
	
	for (i = 0;i < STUDENT_NUMBER;i++)
	{
		student[i].total = calc(student[i]);
		printf("%5s, ", student[i].name);
		for (j = 0;j < 5;j++)
			printf("%8s %3d   %3.1lf ", student[i].subject[j], student[i].credit[j], student[i].grade[j]);
		printf("    %.2lf\n", student[i].total);
	}

	system("pause");
}

void heading()
{
	printf("-----------------------------------------------------------------------------------------------------------------\n");
	printf("성명       과목   학점 평점   과목   학점 평점   과목   학점 평점   과목   학점 평점   과목   학점 평점  평균평점\n");
	printf("-----------------------------------------------------------------------------------------------------------------\n");
}

double calc(struct STUDENT stu) //평균 평점을 구하는 함수 calc
{
	int i, sum = 0; //총 학점
	double tmp = 0; //(학점*평점)의 총합

	for (i = 0;i < 5;i++)
	{
		sum += stu.credit[i];
		tmp += (stu.credit[i] * stu.grade[i]);
	}

	stu.total = tmp / sum;

	return stu.total;
}