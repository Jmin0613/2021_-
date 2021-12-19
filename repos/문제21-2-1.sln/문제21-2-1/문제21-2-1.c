#include <stdio.h>

int main()
{
	char str[30];
	int sum = 0;
	int i, len;

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str); // strlen --> 문자열의 길이를 반환

	for(i = 0; i < len; i++)
	{
		if (str[i] > '0' && str[i] <= '9') //아스키코드
		{
			sum += (str[i] - 48); //정수형 숫자와 문자형 숫자의 아스키코드 값 차이는 48
		}
	}

	printf("숫자의 총 합: %d", sum);
	return 0;
}