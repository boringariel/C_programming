#include <stdio.h>

/*
�迭 �˾ƺ��� (5)
�迭�� Ȱ���� ���� ���߱� ������ ����� ����
*/
void main()
{
	int score[10] = { 6,48,99,78,30,40,55,81,13,4 };
	int i, target, check;

	printf("1~100 ������ �������� ���ڸ� ���纸����: ");
	scanf("%d", &target);
	
	while (target < 1 || target > 100)
	{
		printf("1~100 ������ ������ �������: ");
		scanf("%d", &target);
	}//1~100 ������ ���ڸ� �Է¹޵��� �Ѵ�

	check = 1;

	for (i = 0;i <= sizeof(score) / sizeof(score[i]);i++)
	{
		if (target == score[i])
		{
			printf("������ϴ�! ���� %d��(��) %d��°�� �־����ϴ�!\n", score[i], i);
			check++;
		}
	}
	if (check == 1)
		printf("���� %d��(��) �������ϴ�!\n", target);

	system("pause");
}