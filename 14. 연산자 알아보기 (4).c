#include <stdio.h>

/*
������ �˾ƺ��� (4)
������ �������� �ۼ��� ����
*/

void main()
{
	double x, result;

	printf("x? ");
	scanf("%lf", &x); //���� x�� �Է¹޴´�

	result = (5 * x*x*x) + (6 * x*x) + (7 * x);
	//�̴� result = 5x^3 + 6x^2 + 7x �� ���� �����̴�

	printf("result: %lf\n", result);

	system("pause");
}