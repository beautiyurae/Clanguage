//1���� n������ ���� ����
#include <stdio.h>

int main(void) {

	
	int sum = 0;
	int n;

	printf("n�� �� : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	return 0;
}