// 입력한 정숫값 이하의 2의 거듭제곱을 오름차순으로 출력
#include <stdio.h>

int main(void) {

	int i, n;

	printf("양의 정수를 입력하세요. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		int i = 2;
			while (i <= n) {
				printf("%d ", i);
				i *= 2;
			}
			printf("\n");
	}
	return 0;
}