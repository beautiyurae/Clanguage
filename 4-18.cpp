// �о� ���� ������ ������ ������ �� ���� �� ���
#include <stdio.h>

int main(void) {

	int i, n;

	printf("n�� �� : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("%d�� ������ %d\n", i, i * i);
	}

	return 0;
}