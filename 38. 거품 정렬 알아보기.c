#include <stdio.h>

/*
��ǰ ���� �˾ƺ���
��ǰ ����(���� ����, bubble sort)�� ������ �� ���� ���ؼ� ������ �� �ִ� �˰����̴�
������ ��ȿ����������, �ڵ尡 �����ϱ� ������ �˾Ƶθ� ���� ���̴�
*/
#define sorting_size 5

void main()
{
	double number[sorting_size], tmp;
	int i, j;

	for (i = 0;i < sorting_size;i++)
	{
		printf("�Ǽ��� �Է��ϼ���(%d/5): ", i + 1);
		scanf("%lf", &number[i]);
	}

	printf("\n�Էµ� �Ǽ�(�Ҽ��� �Ʒ� �� �ڸ������� ǥ����)\n");
	for (i = 0;i < sorting_size;i++)
		printf("%.2lf, ", number[i]);
	printf("\n");

	for (i = 0; i < sorting_size - 1; i++)
	{
		for (j = 0; j < sorting_size - 1; j++)
		{
			if (number[j] < number[j + 1])
			{
				tmp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = tmp;
			}
			//�������� ��ǰ ������ �ݺ������� �����Ͽ���. ���� ������ ������Ű�� ������������ ������ �� �ִ�
		}
	}

	printf("\n������������ ���ĵ� �Ǽ�\n");
	for (i = 0;i < sorting_size;i++)
		printf("%.2lf, ", number[i]);
	printf("\n");

	system("pause");
}