// 읽어 들인 정숫값부터 0까지 카운트다운
#include <stdio.h>
int main(void) {
	int n;
	printf("양의 정수를 입력하세요 : ");
	scanf_s("%d", &n);

	if (n >= 0) {
		while (n >= 0) {
			printf("%d ", n);
			n--;
		}
		printf("\n");
	}
	return 0;
}