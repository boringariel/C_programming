#include <stdio.h>

//�Լ��� �ۼ��� ���� ���� �˾ƺ��� (2)

void func1(); //func1()�̶�� �Լ��� ����

void main() //main()�Լ�
{
	printf("main() start!!! \n"); //main()�Լ��� ���۵��� �˸�
	
	func1(); //func1 �Լ��� ȣ����
	
	printf("main() end!!! \n"); //main()�Լ��� ������� �˸�

	system("pause");
}

void func1(void)
{
	printf("func1() start!!! \n"); //func1() �Լ��� ���۵��� �˸�
	printf("func1() end!!! \n"); //func1() �Լ��� ������� �˸�
}

/*
���� ����� ���캸��, �Լ��� ȣ���� ��� ȣ���� ���ο��� �ٷ� �Լ��� �Ѿ�� ���� �� �� ����
�Լ� ������ ������ �� ȣ���� ���� ���κ��� ����ȴ�
*/