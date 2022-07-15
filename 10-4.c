// 요소형이 int형이고 요소 개수가 n인 배열을 전달받아 모든 요소에 첨자와 같은 값을 대입하는 함수 set_idx를 작성하라.
// void set_idx(int* v, int n) { }
#include <stdio.h>

void set_idx(int* v, int n) {
	int i;
	for (i = 0; i < n; i++) {
		v[i] = i;
	}
}

int main(void) {
	int i;
	int a[5];
	set_idx(a, 5);

	for (i = 0; i < 5; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}