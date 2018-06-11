#include <stdio.h>
#include <ctype.h> //toupper �Լ��� ����ϱ� ���� ����ִ´�

typedef struct ADDRESS_BOOK
{
	char name[20];
	int age;
	char gender;
	char grade;
	char mobile[15];
	char address[100];
}addr; //����ü ����

void heading();

/*
����ü �˾ƺ��� (4)
����ü�� �� ��Ҹ� �Է¹޾� �ּҷ����� ����ϴ� ���α׷��� ����� ����
*/
void main()
{
	addr people;

	printf("�̸��� �Է��ϼ���: ");
	gets(&people.name);

	printf("���̸� �Է��ϼ���: ");
	scanf("%d%*c", &people.age); //*c�� ���� ���۸� �����ִ� ����� �Ѵ�

	do {
		printf("������ �Է��ϼ���(��:M, ��:W): ");
		scanf("%c%*c", &people.gender);
		people.gender = toupper(people.gender); //�ҹ��ڸ� �Է��� ���, �빮�ڷ� �ٲٴ� ����� �Ѵ�
	} while (people.gender != 77 && people.gender != 87); //M �Ǵ� W�� �Էµ� ������ �ݺ�

	do {
		printf("ȸ������� �Է��ϼ���(A,B,C): ");
		scanf("%c%*c", &people.grade);
		people.grade = toupper(people.grade);
	} while (people.grade != 65 && people.grade != 66 && people.grade != 67); //���� �Է°� ���� ���

	printf("�޴��� ��ȣ? ");
	gets(&people.mobile);
	printf("�ٹ����� �ּ�? ");
	gets(&people.address);

	heading();

	printf("%10s, %3d, %3c, %3c, %13s, %s\n", people.name, people.age, people.gender, people.grade, people.mobile, people.address);
	//�� ��ҵ��� ����Ѵ�

	system("pause");
}

void heading() //��� ����� �з��� ǥ���Ѵ�
{
	printf("------------------------------------------------------------\n");
	printf("    ����    ���� ���� ���   �޴�����ȣ       ���ּ�\n");
	printf("------------------------------------------------------------\n");
}