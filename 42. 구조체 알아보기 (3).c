#include <stdio.h>
#include <math.h> //�������� ���� �� �ִ� �Լ� sqrt�� ����ϱ� ���� ����

typedef struct point{
	int x;
	int y;
}POINT; //����ü ��Ī: POINT
/*
����ü ��Ī ����
����ü�� �ʱ�ȭ�� ��, �׻� 'struct point' ���� Ÿ������ �ϱ� ���ŷӴ�
�� ��, 'typedef struct' �������� ����ü�� ������ ��, ������ �߰�ȣ �� ����ü ��Ī�� �Բ� �������ָ� ���ϴ�
*/

/*
����ü �˾ƺ��� (3)
����ü�� ��Ī�� �̿��ϴ� ���� �˾ƺ���, ����ü�� �̿��� �� �� ������ �Ÿ��� ���ϴ� ���α׷��� ����� ����
*/
void main()
{
	double distance;

	struct point start;
	POINT end;
	//����ü ���� ����. ���� �Ʒ��� ���� ������ �ٸ�����, ��� ���� ����ü�� ����Ų��

	printf("�� A�� ��ǥ(x,y)�� �Է��ϼ���: ");
	scanf("%d,%d", &start.x, &start.y); //���⼭, &d,%d�� %d%d�� �ٲٸ� ����(,) ��� ����� �� ���ڸ� �����ϰ� �ȴ�

	printf("�� B�� ��ǥ(x,y)�� �Է��ϼ���: ");
	scanf("%d,%d", &end.x, &end.y);

	distance = sqrt((start.x - end.x)*(start.x - end.x) + (start.y - end.y)*(start.y - end.y));
	// sqrt(x) �Լ��� x�� �������� ���� �� ����Ѵ�

	printf("A, B ������ �Ÿ�: %lf\n", distance);

	system("pause");
}