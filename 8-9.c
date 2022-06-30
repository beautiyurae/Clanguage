// ���� �ٸ� n���� �������� r���� ������ �̾� ���� ������ ���� nCr�� ���ϴ� �Լ�
#include <stdio.h>

// ��� ���
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

// ����� ���
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
	printf("���� �ٸ� n���� �������� r���� ������ �̾� ���� ������ ������ ���մϴ�.\n");
	printf("n : ");  scanf("%d", &n);
	printf("r : ");  scanf("%d", &r);
	printf("������ ������ %d���Դϴ�.\n", combination(n, r));
	return 0;
}