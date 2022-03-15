// 읽어 들인 정수 개수만큼 1234567890을 반복 출력
#include <stdio.h>

int main(void) {

	int n, i;

	printf("양의 정수를 입력해주세요. : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n / 10; i++) {
		printf("1234567890");
	}
	for (i = 1; i <= n % 10; i++) {
		printf("%d", i);
	}
	putchar('\n');
	return 0;
}

/*
* for (i = 1; i <= n; i++){
*     printf("%d", i % 10);
* }
* putchar('\n');
* return 0;
*/