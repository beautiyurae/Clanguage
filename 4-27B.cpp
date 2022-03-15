// 왼쪽 위가 직각인 직각이등변삼각형 출력
#include <stdio.h>

int main(void) {

	int i, j, len;

	puts("왼쪽 위가 직각인 직각이등변삼각형을 만듭니다.");
	printf("짧은 변 : ");
	scanf_s("%d", &len);

	for (i = len; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}