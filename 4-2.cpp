//������ 2���� �о� �鿩 ���� ������ ū ������ ��� ������ ���� �� ���
#include <stdio.h>

int main(void) {

	int a, b;
	int n, lower, upper;
	int sum = 0;

	printf("���� A : ");
	scanf_s("%d", &a);
	printf("���� B : ");
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

	printf("%d�̻� %d������ ��� ������ ���� ���� %d�Դϴ�.\n", lower, upper, sum);
	return 0;
}
