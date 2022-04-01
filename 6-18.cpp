// 호출된 횟수를 출력하는 함수
#include <stdio.h>

void put_count(void) {
	static int count = 0;
	printf("put_count : %d회\n", ++count);
}

int main(void) {
	int i, n;

	printf("호출 횟수 : ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		put_count();
	}
	return 0;
}