#include <stdio.h>

/*
��¹� �˾ƺ��� (5)
����� ���� ����� �� �ִ� ���α׷��� ����� ����
*/

void main()
{
	char gender; //������ �����ϴ� ������ ���� gender
	int age; //���̸� �����ϴ� ������ ���� age
	double height; //Ű�� �����ϴ� �Ǽ��� ���� height

	gender = 'w';
	age = 26;
	height = 165.7;

	printf("����: %c, ����: %d, ����: %lf \n", gender, age, height);
	//%c�� ������ ������, %d�� ������ ������, %lf�� �Ǽ��� ������ ����ϴ� ��ȣ�̴�. �ش��ϴ� ������ ��¹� �ڿ� ��ִ°� �⺻ ����

	system ("pause");
}