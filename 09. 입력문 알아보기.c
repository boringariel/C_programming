#include <stdio.h>

//�Է¹� �˾ƺ���

void main()
{
	char gender;
	int age;
	double height; //�� ���� ����

	printf("����(��: m, ��: w)?: "); //�Է��� �����ϴ� �ȳ��� ���
	scanf("%c", &gender); //�Է¹�. ��¹��� ������ �Ҵ��� ���� ���� �ۼ��ϳ�, ������ �̸� �տ� '&'�� �ٿ��� �Ѵ�

	printf("����?: ");
	scanf("%d", &age);

	printf("����?: ");
	scanf("%lf", &height);

	printf("\n ����: %c, ����: %d, ����: %lf \n", gender, age, height);
	
	system("pause");
}