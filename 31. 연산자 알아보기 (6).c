#include <stdio.h>
#include <math.h> //�����Լ� ���̺귯���� �ҷ����� �����̴�

#define numbers 5

/*
������ �˾ƺ��� (6)
�����ڿ� �����Լ��� �̿���
���, �л�, ǥ�������� ����� ����
*/
void main()
{
	double data[numbers + 3] = { 0 };
	/*8���� �����͸� ������ �� �ִ� data ���ڿ��� �����Ѵ�
	���⼭ 5���� �Ǽ��� �����ϰ�,
	������ 3���� ���, �л�, ǥ�������� ������ ������ ���̴�
	*/

	double sum = 0, vSum = 0;
	int i;

	for (i = 0;i < numbers;i++)
	{
		printf("%d, �Ǽ��� �Է��ϼ��� : ", i + 1);
		scanf("%lf", &data[i]);
		sum += data[i];
	}
	data[5] = sum / numbers;//��� ���ϱ�

	for (i = 0;i < numbers;i++)
	{
		vSum += (data[i] - data[numbers])*(data[i] - data[numbers]);
		//�� ������ ������ ����ϰ�, �� ���� vSum�� �����Ѵ�
	}
	data[numbers + 1] = vSum / numbers; //�л� ���ϱ�
	data[numbers + 2] = sqrt(data[6]); //ǥ������ ���ϱ�. sqrt(��)�� �������� ���ϴ� �Լ��̴�
	
	printf("\n�Է��� ��\n");
	for (i = 0;i < numbers;i++)
	{
		printf("%.2lf, ", data[i]); //�Է��� ���� �Ҽ� ��°�ڸ����� �ݿø��� ���
	}

	printf("\n���: %lf \n", data[numbers]);//��� ���
	printf("\n�л�: %f \n", data[numbers + 1]);//�л� ���
	printf("\nǥ������: %f \n", data[numbers + 2]);//ǥ������ ���

	system("pause");
}