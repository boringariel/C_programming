#include <stdio.h>

/*
������ �˾ƺ��� (2)
�����͸� �̿��� ���α׷��� ����� ����
���ڿ��� ��ҹ��ڸ� ���� ��ȯ�ϴ� ���α׷��� ����� ����
*/
void main()
{
	char str[50] = "BoringAriel."; //�ٲ� ���ڿ� str[]
	char newStr[50] = ""; //�ٲ� ���ڿ��� ������ newStr[]
	char *ptr = str, *ptr2 = newStr; //������ �ʱ�ȭ
	int i = 0;

	printf("before: ");
	while (*ptr)
	{
		if (*ptr >= 65 && *ptr <= 90)
			newStr[i] = *ptr + 32;
		else if (*ptr >= 95 && *ptr <= 122)
			newStr[i] = *ptr - 32;
		else
			newStr[i] = *ptr;
		i++;

		printf("%c", *ptr++);
	}
	/*
	���� ���ڿ��� ǥ���԰� ���ÿ�, ��ҹ��ڸ� ��ȯ�Ͽ� newStr[]�� �����ϴ� �ҽ��ڵ��̴�
	�ƽ�Ű�ڵ� �󿡼� �빮�ڴ� 65~90, �ҹ��ڴ� 95~122 ������ ��ġ�Ѵ�
	����, �� ������ ������ 32�� ���ϰų� ���� ������� ��ҹ��� ��ȯ�� �����ϴ�
	*/

	printf("\n\n��ҹ��ڸ� ���� �ٲ���ϴ�.\n\n");

	
	printf("after: ");
	while (*ptr2)
	{
		printf("%c", *ptr2++);
	}//�����͸� �̿��� �ٲ� ���ڿ��� ����Ѵ�
	printf("\n");

	system("pause");
}