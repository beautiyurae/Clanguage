// 서로 다른 n개의 정수에서 r개의 정수를 뽑아 만든 조합의 개수 nCr을 구하는 함수
#include <stdio.h>

// 재귀 방법
//int factorial(int n) {
//	if (n > 0) {
//		return n * factorial(n - 1);
//	}
//	else
//		return 1;
//}
//
//
//int combination(int n, int r) {
//	return (factorial(n) / (factorial(r) * factorial(n - r)));
//}

// 비재귀 방법
int combination(int n, int r) {
	if (r == 0 || r == n) {
		return 1;
	}
	else if (r == 1) {
		return n;
	}
	return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void) {
	int n, r;
	printf("서로 다른 n개의 정수에서 r개의 정수를 뽑아 만든 조합의 개수를 구합니다.\n");
	printf("n : ");  scanf("%d", &n);
	printf("r : ");  scanf("%d", &r);
	printf("조합의 개수는 %d개입니다.\n", combination(n, r));
	return 0;
}