#include <stdio.h>
#include <string.h>

/*
���ڿ� �˾ƺ��� (2)
���ڿ� ó���Լ��� �˾ƺ���
*/

void main()
{
	char parts[5][15] = { "ariel","and","C","programming","!!!" };
	//�ִ� 15�ڱ��� ���� �� �ִ� ���ڿ� 5���� �迭�� �ʱ�ȭ�Ǿ� �ִ�

	char tmp[100] = ""; //�� �迭 ����
	int i;

	for (i = 0;i < 5;i++)
	{
		strcat(tmp, parts[i]); //parts�� �� ���ڿ��� tmp ���ڿ��� ���� �߰��ȴ�
		strcat(tmp, "-"); //"-" ���ڰ� tmp �迭�� ���� �߰��ȴ�
	}

	printf("tmp : %s \n", tmp);
	//tmp ���ڿ��� ����Ѵ�. �ռ� ������ �ڵ忡 ���� 'ariel-and-C-programming-!!!-' �̶�� ���ڿ��� ��µȴ�

	system("pause");
}