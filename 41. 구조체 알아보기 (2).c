#include <stdio.h>

/*
����ü �˾ƺ��� (2)
����ü�� �����͸� �Բ� �̿��غ���

����ü�� ������ҿ� ������ ���� '.'�� ����Ѵ�
������, ����ü �����͸� ����� ���, ����ü ������ ������ '->'�� ����Կ� �����϶�

����ü �˾ƺ���.c ������ ������� �ؼ�, �����͸� ����ϵ��� �����Ѵ�
*/
void main()
{
	struct STUDENT {
		char name[20];
		int score[3];
		int sum;
		float avg;
	};

	struct STUDENT fish = { "�ܴ����� �����",80,64,98 };
	struct STUDENT *ptr; //����ü ������ ���� ptr ����
	int i;

	ptr = &fish; //����ü ������ ������ ������ �ּ� ����. �迭�� �޸� �ּҿ����ڸ� ����Կ� ����

	for (i = 0;i < 3;i++)
		ptr->sum += ptr->score[i];
		//fish.sum += fish.score[i]; (���� �ڵ�) �� ���غ���

	fish.avg = (float)(fish.sum / i);

	printf("%s, %d, %d, %d, %d, %.2f\n", ptr->name, ptr->score[0], ptr->score[1], ptr->score[2], ptr->sum, ptr->avg);
	//��¹������� �����͸� �̿��� ������ �����ϴ�

	system("pause");
}