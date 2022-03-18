// 배열의 각 요소를 앞에서부터 순서대로 5,4,3,2,1로 초기화하고 출력
#include <stdio.h>
int main(void) {
	int i;
	int v[5] = { 5,4,3,2,1 };
	for (i = 0; i < 5; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}
	return 0;
}