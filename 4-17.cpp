// �о� ���� ������ ������ Ȧ�� ���
#include <stdio.h>

int main(void) {
	int i, n;
	printf("������ : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i += 2) {
		printf("%d ", i);
		
	}
	return 0;
}