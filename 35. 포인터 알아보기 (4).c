#include <stdio.h>

/*
������ �˾ƺ��� (4)
�������� ������ �̿��� ���ڿ��� ������Ű�� ���α׷��� ����� ����
*/
void main()
{
	char str[50] = "boringariel";
	char *ptr;

	printf("str     : %s\n", str);

	printf("str ����: ");

	ptr = str;
	while (*ptr)
	{
		ptr++;
	}
	ptr--;
	//�������� ������ �̿���, ���ڿ��� ���Ե� ������ ���� �˾Ƴ���

	while (*ptr)
	{
		printf("%c", *ptr--);
		if (ptr < str) {
			break;
		}//�������� �ּҰ� str�� �ּҺ��� ���� ��� �ݺ��� ����. �ּ� �� �ּ��� �񱳰� �����ϴ�
	}
	printf("\n");

	system("pause");
}