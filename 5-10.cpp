//4행 3열의 행렬과 3행 4열의 행렬의 곱 구하기
#include <stdio.h>

int main(void) {

	int i, j, k;
	int a[4][3];
	int b[3][4];
	int c[4][4];

	printf("4행 3열 a와 3행 4열의 b의 곱을 c로 구합니다.\n");

	printf("a의 각 요소 값을 입력하세요.\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] : ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("b의 각 요소 값을 입력하세요.\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("b[%d][%d] : ", i, j);
			scanf_s("%d", &b[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			c[i][j] = 0;
			for (k = 0; k < 3; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printf("c의 값은 다음과 같습니다.\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
		}
	}
	return 0;
}