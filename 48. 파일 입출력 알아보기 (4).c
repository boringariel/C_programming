#include <stdio.h>

struct JUMP
{
	char name[20];
	int first;
	int second;
	int third;
	float avg;
};

void heading();

/*
���� ����� �˾ƺ��� (4)
���������� ������ �о���� �� �ֵ��� ���α׷��� �ۼ��� ����

'���� ����� �˾ƺ��� (3).c' ������ �������,
�ش� ���Ͽ��� ���������� '���.txt'�� �ҷ��� �� �ִ� ���α׷��� �ۼ��Ѵ�
*/
void main()
{
	struct JUMP jump[10];
	int i, result;
	FILE *fp;

	fp = fopen("���.txt", "rt"); //���� �ҷ����� (�б� ����)

	if (fp == NULL)
	{
		printf("������ ���� ���߽��ϴ�!\n");
		exit(1);
	}
	
	heading();

	i = 0;
	while (1)
	{		
		result = fscanf(fp, "%s %3d %3d %3d %9f ", &jump[i].name, &jump[i].first, &jump[i].second, &jump[i].third, &jump[i].avg);
		//������������ ���� ���� �������� �ҷ��� �� �ִ�. (��, �Ǽ� ������ �Ҽ��� �Ʒ� �ڸ��� ������ ����)

		if (result == EOF)
			break;

		printf("%s, %3d, %3d, %3d, %7.2f\n", jump[i].name, jump[i].first, jump[i].second, jump[i].third, jump[i].avg);
		//�ҷ��� ������ ����ϴ� ���, ������ ���Ĵ�� ����� �� �ִ�

		i++;
	}

	system("pause");
}

void heading()
{
	printf("--------------------------------\n");
	printf("�̸�    1��  2��  3��   ���\n");
	printf("--------------------------------\n");
}