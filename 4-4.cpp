// 읽어 들인 정숫값부터 1까지 카운트다운
#include <stdio.h>

int main(void) {

	int n;

	printf("양의 정수를 입력하세요. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		while (n >= 1) {
			printf("%d ", n--);
		}
		printf("\n");
	}
	return 0;
}