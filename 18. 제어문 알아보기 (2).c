#include <stdio.h>

/*
��� �˾ƺ��� (2)
����� ������ switch���� �˾ƺ���
switch���� �̿��� ���� ���ϱ� ���α׷��� ����� ����
*/

void main()
{
	int score;
	printf("����? ");
	scanf("%d", &score); //������ score ������ �Է¹޴´�

	switch (score / 10) //(score/10)�� ���� ���Ѵ�. �� �� �����̹Ƿ� �Ҽ��� �Ʒ� ���� ������
	{
	case 10: //10�� ��� => score�� 100�� ���. �Ʒ��� �ڵ尡 �����Ƿ� ���� �������� �Ѿ��
	case 9:	printf("A ����\n"); //9�� ��� => �ռ� ����� ���� ������ 90�� �̻��� ��� A ������ �Ҵ��Ѵ�
		break;
		//break�� �Ʒ� ������ �����ϰ� �������´ٴ� �ǹ��̴�. �Ʒ� ������ �ʿ������ ��� ����Ѵ�

	case 8:	printf("B ����\n");
		break;
	case 7:	printf("C ����\n");
		break;
	case 6:	printf("D ����\n");
		break;
	default: printf("���� \n"); //�⺻��. �� �ڵ��� break ������ �ƹ� ���ǵ� �������� ���� ��� ��µȴ�

		printf("����� ����: %d \n", score);
		break;
	}
	printf("End. \n");

	system("pause");
}