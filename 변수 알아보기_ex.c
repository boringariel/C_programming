#include <stdio.h>
#include <limits.h>

/*
변수 알아보기
signed/unsigned short int에 대해 알아보자
*/
int main(void)
{
	short int s1 = SHRT_MIN;
	short int s2 = SHRT_MAX;

	printf("s1: %d,s2: %d \n", s1, s2);
	printf("s1-1: %d \n", s1 - 1); //언더플로우
	printf("s2+1: %d \n", s2 + 1); //오버플로우

	printf("\n현재 시스템의 C 컴파일러 데이터 유형의 크기: \n");

	printf("signed char: ");
	printf("\t %d byte(%d bit)\n", sizeof(signed char), CHAR_BIT);
	printf("\t값의 범위: %d 에서 %d 까지의 값\n\n", CHAR_MIN, CHAR_MAX);

	printf("unsigned char: ");
	printf("\t %d byte(%d bit)\n", sizeof(unsigned char), CHAR_BIT);
	printf("\t값의 범위: %d 에서 %d 까지의 값\n\n", 0, UCHAR_MAX);

	printf("signed short int: ");
	printf("\t %d byte \n", sizeof(signed short));
	printf("\t값의 범위: %d 에서 %d 까지의 값\n\n", SHRT_MIN, SHRT_MAX);

	printf("unsigned short int: ");
	printf("\t %d byte \n", sizeof(unsigned short));
	printf("\t값의 범위: %d 에서 %d 까지의 값\n\n", 0, USHRT_MAX);

	printf("signed int: ");
	printf("\t %d byte \n", sizeof(signed int));
	printf("\t값의 범위: %d 에서 %d 까지의 값\n\n", INT_MIN, INT_MAX);

	printf("unsigned int: ");
	printf("\t %d byte \n", sizeof(unsigned int));
	printf("\t값의 범위: %d 에서 %u 까지의 값\n\n", 0, UINT_MAX);

	system("pause");
}