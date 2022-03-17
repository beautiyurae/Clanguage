//정숫값 2개를 읽어 들여 작은 수부터 큰 수까지 모든 정수를 더한 값 출력
#include <stdio.h>

int main(void) {

	int a, b;
	int n, lower, upper;
	int sum = 0;

	printf("정수 A : ");
	scanf_s("%d", &a);
	printf("정수 B : ");
	scanf_s("%d", &b);
	if (a > b) {
		lower = b;
		upper = a;
	}
	else {
		lower = a;
		upper = b;
	}

	n = lower;

	do {
		sum += n;
		n++;
	} while (n <= upper);

	printf("%d이상 %d이하의 모든 정수를 더한 값은 %d입니다.\n", lower, upper, sum);
	return 0;
}
