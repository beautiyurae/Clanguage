// 읽어 들인 정수 개수만큼 *를 연속 출력
#include <stdio.h>

int main(void) {

	int n;

	printf("양의 정수를 입력하세요. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		while (n-- > 0) {
			putchar('*');

		}
		putchar('\n');
	}
	return 0;
}



/*if (n >= 1) {
		int i = 1;
		while (i <= n) {
			printf("*");
			i++;
		}
		printf("\n");
	}
	return 0;*/