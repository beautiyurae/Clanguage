// 읽어 들인 정숫값 이하의 홀수 출력
#include <stdio.h>

int main(void) {
	int i, n;
	printf("정숫값 : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i += 2) {
		printf("%d ", i);
		
	}
	return 0;
}