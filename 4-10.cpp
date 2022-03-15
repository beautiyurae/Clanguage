// 읽어 들인 양의 정숫값 개수만큼 *를 세로로 연속 출력
#include <stdio.h>

int main(void) {

	int i, n;

	printf("양의 정수를 입력하세요. : ");
	scanf_s("%d", &n);
	while (n-- > 0) {
		puts("*");
	}
	return 0;
}



/*if (n >= 1) {
		int i = 1;
		while (i <= n) {
			printf("*\n");
			i++;
		}
	}
	return 0;*/