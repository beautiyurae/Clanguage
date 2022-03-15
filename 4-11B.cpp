// 읽어 들인 양의 정숫값 개수만큼 +와 -를 교대로 출력
#include <stdio.h>

int main(void) {

	int i, n;

	printf("양의 정수를 입력하세요. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		int i = 1;
		while (i <= n / 2) {
			printf("+-");
			i++;
		}
		if (n % 2 == 1) {
			printf("+");
		}
		putchar('\n');
	}
	return 0;
}