// 1���� n������ �� ���ϱ�
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

	printf("������ : ");
	scanf_s("%d", &no);
	printf("1���� %d������ ���� %d�Դϴ�.", no, sumup(no));

	return 0;
}