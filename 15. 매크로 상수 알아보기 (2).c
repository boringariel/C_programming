#include <stdio.h>

/*
��ũ�� ��� �˾ƺ��� (2)
��ũ�� ����� �����ڸ� �̿��� ������ȯ ���α׷��� ����� ����
*/

#define FEET 30.48 //1��Ʈ�� 30.48cm�̴�
#define YARD (FEET*3) //1�ߵ�� 3��Ʈ�̴�
#define INCH 2.54 //1��ġ�� 2.54cm�̴�
//�� ������ ��ũ�� ����� ������

void main()
{
	int yard;

	printf("������ �⺻������ �ߵ�(yard) �Է�? ");
	scanf("%d", &yard);

	printf("%d yard�� feet�� %.2f\n", yard, yard*YARD/FEET);
	printf("%d yard�� inch�� %.2f\n", yard, yard*YARD/INCH);
	printf("%d yard�� cm�� %.2f\n", yard, yard*YARD); //��ũ�� ����� �����ڸ� �̿��� ����� �� �ִ�

	system("pause");
}