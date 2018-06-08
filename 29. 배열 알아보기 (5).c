#include <stdio.h>

/*
배열 알아보기 (5)
배열을 활용해 숫자 맞추기 게임을 만들어 보자
*/
void main()
{
	int score[10] = { 6,48,99,78,30,40,55,81,13,4 };
	int i, target, check;

	printf("1~100 사이의 범위에서 숫자를 맞춰보세요: ");
	scanf("%d", &target);
	
	while (target < 1 || target > 100)
	{
		printf("1~100 사이의 범위로 적어보세요: ");
		scanf("%d", &target);
	}//1~100 사이의 숫자만 입력받도록 한다

	check = 1;

	for (i = 0;i <= sizeof(score) / sizeof(score[i]);i++)
	{
		if (target == score[i])
		{
			printf("맞췄습니다! 숫자 %d은(는) %d번째에 있었습니다!\n", score[i], i);
			check++;
		}
	}
	if (check == 1)
		printf("숫자 %d은(는) 없었습니다!\n", target);

	system("pause");
}