// 1부터 n까지의 합 구하기
#include <stdio.h>

int sumup(int n) {

	int sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main(void) {

	int no;

	printf("정숫값 : ");
	scanf_s("%d", &no);
	printf("1부터 %d까지의 합은 %d입니다.", no, sumup(no));

	return 0;
}