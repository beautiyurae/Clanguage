// 읽어 들인 정숫값 이하의 정수와 그 제곱 값 출력
#include <stdio.h>

int main(void) {

	int i, n;

	printf("n의 값 : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("%d의 제곱은 %d\n", i, i * i);
	}

	return 0;
}