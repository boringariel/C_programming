#include <stdio.h>

int function(int array[]);

/*
������ �˾ƺ��� (6)
�Է¹޴� �������� Ư���� �������� Ȱ�뿡 ���� �˾ƺ���
*/
void main()
{
	int num[5] = { 2,4,6,8,10 }, i;

	function(num);

	system("pause");
}

int function(int array[])
{
	int i;

	printf("�迭�� sizeof �Լ� ��ȯ��: %d \n", sizeof(array));
	//�Լ����� �迭�� �Է¹��� ���, �迭 ��ü�� �ƴ� �迭�� �ּҸ� �Է¹ް� �ȴ�. ���� sizeof(tmp)�� 4�� ��µȴ�

	printf("�迭�� ���ҵ�: ");
	for (i = 0;i < 5;i++)
		printf("%d, ", *(array + i));
	//�迭�� �ּҸ� �Է¹޴� Ư����, �����������ڸ� �̿��� �� �ִ�

	printf("\n");
}