#include <stdio.h>
#include <stdlib.h>
#include <time.h> //rand �Լ��� �̿��ϱ� ����

/*
���� �˾ƺ���
������ �����, �̸� �׷����� �ð�ȭ�ϴ� ���α׷� �����
����: C���� ������ rand �Լ��� �̿��� �����. �̸� ����Ϸ��� time,h ����� �ʿ��ϴ�
*/

void main()
{
	char A[50] = "", B[50] = "", C[50] = "";
	int a_num = 0, b_num = 0, c_num = 0, i, random_num;

	srand(time(NULL));

	for (i = 1;i <= 50;i++)
	{
		random_num = rand() % 3;
		/*
		0~2 ������ ���� ����
		�������� ���� ������ ��, �̸� 3���� ������ �������� �׻� 0~2 ������ ���� ������
		�̸� �̿���, ������ ������ ���� rand() % (���ϴ� ����) �� �̿��ϸ� ���ϴ�
		*/

		switch (random_num)
		{
		case 0:
			a_num++;
			break;
		case 1:
			b_num++;
			break;
		case 2:
			c_num++;
			break;
		}
		
		A[49] = '\0';
		B[49] = '\0';
		C[49] = '\0';
		//A, B, C �迭�� �޺κ��� '\0'���� �����ؾ� �迭�� ǥ���� �� ������ ���� �� �ִ�
	}

	for (i = 0; i <= a_num; i++)
	{
		A[i] = '*';
	}
	for (i = 0; i <= b_num; i++)
	{
		B[i] = '*';
	}
	for (i = 0; i <= c_num; i++)
	{
		C[i] = '*';
	}

	printf("A: %-50s | %d��, \n", A, a_num);
	printf("B: %-50s | %d��, \n", B, b_num);
	printf("C: %-50s | %d��, \n", C, c_num);
	//%-50s�� 50�ڸ� ǥ���� �� �ִ� ����(50)�� �������ķ�(-) ����(s)�� ǥ���Ѵٴ� ���̴�

	system("pause");
}