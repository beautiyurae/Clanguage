// 읽어 들인 정숫값의 모든 약수와 그 개수를 출력
#include <stdio.h>

int main(void) {

	int i, n, count;

	printf("정숫값 : ");
	scanf_s("%d", &n);

	count = 0;

	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
			count++;
		}
	}
	printf("약수는 %d개입니다.\n", count);
	return 0;
}