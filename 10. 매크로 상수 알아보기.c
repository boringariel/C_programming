#include <stdio.h>

/*
��ũ�� ����� ���� �˾ƺ���
��ũ�� ����� Ư�� ���� ġȯ�ϴ� ����� �����Ѵ�
*/

#define TRUE 1 //��ũ�� ��� ����. '='�� ';'�� ������� ������ ����
#define FALSE 0

int main()
{
	int true = 1; //���� ����. ��ũ�� ��� TRUE�� �ٸ��� ����
	int false = 0;

	printf("TRUE: %d, FALSE: %d \n", TRUE, FALSE); //��ũ�� ����� ����ó�� ȣ���� �� �ִ�
	printf("true: %d, false: %d \n", true, false);
	
	true = 2;
	false = 3;

	printf("true: %d, false: %d \n", true, false);
	system("pause");
}

/*
������
TRUE: 1, FALSE: 0
true: 1, false: 0
true: 2, false: 3

�̸� ������ ��ũ�� ����� ������ ���̸� Ȯ���϶�
*/