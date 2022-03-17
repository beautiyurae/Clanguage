// 왼쪽 위가 직각인 직각이등변삼각형 출력
#include <stdio.h>
int main(void) {
	int len;
	printf("왼쪽 위가 직각인 직각이등변삼각형을 만듭니다.\n");
	printf("짧은 변 : ");
	scanf_s("%d", &len);

	for (int i = len; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}