#include <stdio.h>

/*
��� �˾ƺ��� (7)
����� ������ do-while ���� �˾ƺ���
*/

void main()
{
	int i = 1;
	do { //do �ڵ�� �κ��� �켱 1ȸ ���۵ȴ�
		printf("%d ", i);
		i++;
	} while (i <= 10); //while ������ �����ϴ� ��, do �ڵ�� ���� �ڵ�� �ݺ��ȴ�
	printf("\n");

	system("pause");
}