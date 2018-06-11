#include <stdio.h>

#define STUDENT_NUMBER 3

struct STUDENT
{
	char name[20];
	char subject[5][30];
	int credit[5];
	double grade[5];
	double total;
}; //�̸�, ���� 5��(2���� �迭 ���), ����, ����, ��������� ������ �� �ִ� ����ü STUDENT

double calc(struct STUDENT stu);
void heading();

/*
����ü �˾ƺ��� (5)
����ü �迭�� �˾ƺ���
����ü�� �ܵ����ε� ����� �� ������, �迭 �������� ������ ���� �ִ�
�̸� �̿��� �л� ���� ��ȸ ���α׷��� ����� ����
*/
void main()
{
	struct STUDENT student[STUDENT_NUMBER] = {
		{"���߾�",
		"C","JAVA","���̽�","����1","����2",
		3, 3, 3, 2, 2,
		4.5, 4.0, 3.5, 3.0, 2.5, 2.0
		},

		{"������",
		"���̽�","���м���","JAVA","DB","����2",
		3, 2, 3, 3, 2,
		3.0, 4.5, 3.0, 2.0, 3.5, 3.0
		},

		{"�Ƶ��",
		"C","���̽�","DB","����1","����2",
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
	printf("����       ����   ���� ����   ����   ���� ����   ����   ���� ����   ����   ���� ����   ����   ���� ����  �������\n");
	printf("-----------------------------------------------------------------------------------------------------------------\n");
}

double calc(struct STUDENT stu) //��� ������ ���ϴ� �Լ� calc
{
	int i, sum = 0; //�� ����
	double tmp = 0; //(����*����)�� ����

	for (i = 0;i < 5;i++)
	{
		sum += stu.credit[i];
		tmp += (stu.credit[i] * stu.grade[i]);
	}

	stu.total = tmp / sum;

	return stu.total;
}