// 읽어 들인 양의 정숫갑까지 카운트업
#include <stdio.h>

int main(void) {

	int i, n;

	printf("양의 정수를 입력하세요. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		int i = 1;
		while (i <= n) {
			printf("%d ", i++);
		}
		printf("\n");
	}
	return 0;
}