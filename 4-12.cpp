// �о� ���� ���� �������� �������� ���
#include <stdio.h>

int main(void) {

	int n;
	do {
		printf("���� ������ �Է��ϼ���. : ");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("\a���� ������ �Է����ּ���.\n");
		}
	} while (n <= 0);
	printf("%d�� �Ųٷ� ������ ", n);
	while (n > 0) {
			printf("%d", n % 10);
			n /= 10;
	}
	printf("�Դϴ�.\n");
	return 0;
}
