#include <stdio.h>

/*
��� �˾ƺ���
����� ������ if-else���� �˾ƺ���
*/

int main(void)
{
	int num;
	printf("input number? ");
	scanf("%d", &num); //num�� �Է¹���

	if (num >= 0) { //num�� 0 �̻��̶��
		printf("positive \n");
	} //������ ����
	else { //if���� �����̶��
		printf("negative \n");
	} //������ ����

	printf("quit...\n");

	system("pause");
}