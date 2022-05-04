// 읽어 들인 10진수 양의 정숫값을 8진수와 16진수로 출력
#include <stdio.h>
int main(void) {
	int n;
	printf("양의 정숫값 : ");
	scanf_s("%d", &n);

	printf("8진수는 0%o입니다.\n", n);
	printf("16진수는 0x%x입니다.\n", n);

	return 0;
}