#include <stdio.h>

/*
���� �˾ƺ���
���� ������ �ѷ��� ���ϴ� ���α׷��� ���� ������ Ư¡�� ���� �˾ƺ���
*/

int main(void)
{
	const float PI = 3.14159; //���ȭ�� ���� ����. �� ������ ������ �� ����
	int radius; //�Ϲ� ���� ����. �� ������ ������ �� �ִ�

	radius = 7;
	printf("�������� %d�� ���� ����: %lf \n", radius, radius*radius*PI); //������ ������ �����ϴ�
	printf("�������� %d�� ���� �ѷ�: %lf \n", radius, radius*2*PI);

	radius = 10; //������ ���� �ٲ� �� �ִ�
	//PI=3.1; //�� �ڵ�� ������ ����Ų��. ���ȭ�� ������ ������ �� ���� �����̴�

	printf("�������� %d�� ���� ����: %lf \n", radius, radius*radius*PI);
	printf("�������� %d�� ���� �ѷ�: %lf \n", radius, radius * 2 * PI);

	system("pause");
}