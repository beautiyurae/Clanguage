//1부터 n까지의 합을 구함
#include <stdio.h>

int main(void) {

	
	int sum = 0;
	int n;

	printf("n의 값 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1에서 %d까지의 합은 %d입니다.\n", n, sum);
	return 0;
}