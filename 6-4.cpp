// 정수의 4제곱 값 구하기
#include <stdio.h>

int sqr(int x) {
	return x * x;
}
int pow4(int x) {
	return sqr(x) * sqr(x); // sqr(sqr(x));
}
int main(void) {
	int n;

	printf("정숫값 : ");
	scanf_s("%d", &n);
	printf("%d의 4제곱 값은 %d입니다.", n, pow4(n));
	return 0;
}