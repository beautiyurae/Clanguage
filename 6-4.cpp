// ������ 4���� �� ���ϱ�
#include <stdio.h>

int sqr(int x) {
	return x * x;
}
int pow4(int x) {
	return sqr(x) * sqr(x); // sqr(sqr(x));
}
int main(void) {
	int n;

	printf("������ : ");
	scanf_s("%d", &n);
	printf("%d�� 4���� ���� %d�Դϴ�.", n, pow4(n));
	return 0;
}