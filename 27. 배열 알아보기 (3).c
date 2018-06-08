#include <stdio.h>

/*
배열 알아보기 (3)
배열을 응용해 프로그램을 만들어 보자
1차원 배열에 문자열을 입력해, 숫자와 알파벳, 기타 문자를 구분하는 프로그램 만들기
*/
void main()
{
	int number = 0, etc = 0, alphabet = 0, i;
	char str[100];

	printf("문자열을 입력하세요: ");
	gets(str); //엔터가 입력될 때까지의 문자열을 입력받는 코드. scanf("%[^\n]", &str); 코드도 비슷한 기능을 수행한다
	
	for (i = 0;str[i];i++)
	{
		if (48 <= str[i] && str[i] <= 57) //아스키코드를 이용해 숫자를 확인한다
			number++;
		else if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122)) //알파벳을 확인한다
			alphabet++;
		else
			etc++;
	}

	printf("입력된 숫자는 %d개, 알파벳은 %d개, 기타 문자는 %d개입니다.\n", number, alphabet, etc);

	system("pause");
}
/*
참고: 아스키코드로 숫자는 48~57, 알파벳 대문자는 65~90, 소문자는 97~122 사이의 값을 가진다.
C 언어에서는 x<y<z 식의 표현을 할 수 없으므로, &&(그리고)이나 ||(또는) 등의 표현을 이용해야 한다.
*/