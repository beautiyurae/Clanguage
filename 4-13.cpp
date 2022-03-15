// 읽어 들인 양의 정숫값의 자릿수 출력

#include <stdio.h>

int main(void) {

	int n, temp;
	int digits;

	do {
		printf("양의 정수를 입력하세요. : ");
		scanf_s("%d", &n);
		
		if (n <= 0) {
			printf("양의 정수만 입력하세요.\n");
		}

	} while (n <= 0);

	n = temp;
	digits = 0;

	while (temp > 0) {
		temp /= 0;
		digits++;
	}

	printf("%d은(는) %d자리입니다.\n", n, digits);
	return 0;
}