// 정사각형 그리기
#include <stdio.h>

int main(void) {

	int i, j;
	int height;

	printf("정사각형을 그립니다.\n");
	printf("높이는 얼마입니까? : ");
	scanf_s("%d", &height);

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= height; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}