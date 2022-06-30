// 음이 아닌 정수의 계승값을 구하는 함수 factorial을 작성하라

#include <stdio.h>
// 재귀방법
//int factorial(int n) {
//	if (n > 0) {
//		return n * factorial(n - 1);
//	}
//	else
//		return 1;
//}

// 비 재귀방법
int factorial(int n) {
	int f = 1;
	while (n > 0) {
		f *= n--;
	}
	return f;
}


int main(void) {
	int num;
	printf("정수를 입력하세요 : "); scanf("%d", &num);
	printf("%d의 계승은 %d입니다.\n", num, factorial(num));
	return 0;
}

