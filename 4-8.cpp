// 읽어 들인 양의 정숫값까지 카운트업
#include <stdio.h>

int main(void) {

	int n;

	printf("양의 정수를 입력하세요. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		int i = 1;
		printf("{");
		while (i < n) {
			printf("%d, ", i++);
		}
		printf("%d}\n", n);
	}
	return 0;
}