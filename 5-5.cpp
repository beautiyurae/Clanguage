// 배열의 모든 요소 나열을 반전
#include <stdio.h>
#define NUMBER 7 // 개체 형식의 매크로, NUMBER가 7로 치환

int main(void) {
	int i;
	int x[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	for (i = 0; i < NUMBER / 2; i++) {
		int temp = x[i];
		x[i] = x[NUMBER - i - 1];
		x[NUMBER - i - 1] = temp;
	}

	printf("변환했습니다.\n");

	for (i = 0; i < NUMBER; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	return 0;
}