// 배열의 모든 요소를 반전
#include <stdio.h>
#define NUMBER 7

void rev_intary(int v[], int n) {
	for (int i = 0; i < n / 2; i++) {
		int temp = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = temp;
	}
}

int main(void) {
	int x[NUMBER];
	for (int i = 0; i < NUMBER; i++) {
		printf("x[%d] : ", i); scanf_s("%d", &x[i]);
	}
	rev_intary(x, NUMBER);

	puts("반전했습니다.");
	for (int i = 0; i < NUMBER; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}
	return 0;
}