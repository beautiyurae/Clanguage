// 배열의 각 요소에 앞에서부터 순서대로 0,1,2,3,4를 대입하고 출력

#include <stdio.h>

int main(void) {
	int i;
	int v[5];

	for (i = 0; i < 5; i++) {
		v[i] = i;
	}
	for (i = 0; i < 5; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}
	return 0;
}