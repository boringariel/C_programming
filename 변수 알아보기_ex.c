#include <stdio.h>
#include <limits.h>

/*
���� �˾ƺ���
signed/unsigned short int�� ���� �˾ƺ���
*/
int main(void)
{
	short int s1 = SHRT_MIN;
	short int s2 = SHRT_MAX;

	printf("s1: %d,s2: %d \n", s1, s2);
	printf("s1-1: %d \n", s1 - 1); //����÷ο�
	printf("s2+1: %d \n", s2 + 1); //�����÷ο�

	printf("\n���� �ý����� C �����Ϸ� ������ ������ ũ��: \n");

	printf("signed char: ");
	printf("\t %d byte(%d bit)\n", sizeof(signed char), CHAR_BIT);
	printf("\t���� ����: %d ���� %d ������ ��\n\n", CHAR_MIN, CHAR_MAX);

	printf("unsigned char: ");
	printf("\t %d byte(%d bit)\n", sizeof(unsigned char), CHAR_BIT);
	printf("\t���� ����: %d ���� %d ������ ��\n\n", 0, UCHAR_MAX);

	printf("signed short int: ");
	printf("\t %d byte \n", sizeof(signed short));
	printf("\t���� ����: %d ���� %d ������ ��\n\n", SHRT_MIN, SHRT_MAX);

	printf("unsigned short int: ");
	printf("\t %d byte \n", sizeof(unsigned short));
	printf("\t���� ����: %d ���� %d ������ ��\n\n", 0, USHRT_MAX);

	printf("signed int: ");
	printf("\t %d byte \n", sizeof(signed int));
	printf("\t���� ����: %d ���� %d ������ ��\n\n", INT_MIN, INT_MAX);

	printf("unsigned int: ");
	printf("\t %d byte \n", sizeof(unsigned int));
	printf("\t���� ����: %d ���� %u ������ ��\n\n", 0, UINT_MAX);

	system("pause");
}