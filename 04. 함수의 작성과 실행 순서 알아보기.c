#include <stdio.h>

//�Լ��� �ۼ��� ���� ���� �˾ƺ���

void func1(void); //func1()�̶�� �Լ��� ����

void main() //main()�Լ�
{
	printf("main() start!!! \n"); //main()�Լ��� ���۵��� �˸�
	printf("main() end!!! \n"); //main()�Լ��� ������� �˸�

	system("pause");
}

void func1(void)
{
	printf("func1() start!!! \n"); //func1() �Լ��� ���۵��� �˸�
	printf("func1() end!!! \n"); //func1() �Լ��� ������� �˸�
}

//���� ����� ���캸��, �Լ��� �ۼ��ߴ��� ȣ������ �ʾ��� ��� ������� ������ Ȯ���� �� �ִ�