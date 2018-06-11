#include <stdio.h>

#define NUMBER 3

struct JUMP
{
	char name[20];
	int first;
	int second;
	int third;
	float avg;
}; //�̸�, 1/2/3���ñ�, ��� ������ ����

void heading();

/*
���� ����� �˾ƺ��� (3)
����ü�� �̿��� �پ��� ������ ������ ���� ����� �˾ƺ���

�� ���� �ָ��ٱ� ����� �����ְ�, ����� ����� �� �����ϴ� ���α׷��� ����� ����
*/
void main()
{
	struct JUMP jump[NUMBER] =
	{
		{ "���߾�",123,108,116 },
		{ "������",132,144,100 },
		{ "�Ƶ��",109,96,116 },
	}; //�̸��� ����� �ۼ�

	int i;
	FILE *fp;

	for (i = 0;i < NUMBER;i++)
		jump[i].avg = (float)(jump[i].first + jump[i].second + jump[i].third) / 3; //��� ���

	heading();

	for (i = 0;i < NUMBER;i++)
		printf("%s, %3d, %3d, %3d, %7.2f\n", jump[i].name, jump[i].first, jump[i].second, jump[i].third, jump[i].avg); //��ϰ� ��� ���

	fp = fopen("���.txt", "wt"); //������ ���� �������� ����

	for (i = 0;i < NUMBER;i++)
		fprintf(fp, "%s %3d %3d %3d %7.2f ", jump[i].name, jump[i].first, jump[i].second, jump[i].third, jump[i].avg);//���� ����

	fclose(fp);

	printf("������Ʈ ��ο� ���.txt ���Ϸ� �������� �Ϸ�!\n");

	system("pause");
}

void heading()
{
	printf("--------------------------------\n");
	printf("�̸�    1��  2��  3��   ���\n");
	printf("--------------------------------\n");
}
/*
���α׷� ����� ��� ������ heading �Լ��� �Բ� ��µ�����,
����� ������ ��� ��µ� ������ �����ϰ� fprintf �Լ��� �������� ����Ǵ� ���� Ȯ���� �� �ִ�
*/