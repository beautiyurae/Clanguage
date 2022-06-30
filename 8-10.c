// 2개의 정숫값x와 y의 최대 공약수를 유클리드 호제법을 이용해 구하는 함수
#include <stdio.h>
int gcd(int x, int y) {
	int r = x % y;
	if (r == 0) {
		return y;
	}
	return gcd(y, r);
}

int main(void) {
	int x, y;
	printf("2개의 정숫값x와 y의 최대 공약수를 구합니다.\n");
	printf("정수를 입력하세요: "); scanf("%d", &x);
	printf("정수를 입력하세요: "); scanf("%d", &y);
	printf("최대 공약수는 %d입니다.\n", gcd(x, y));
	return 0;
}