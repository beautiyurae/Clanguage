// �Ʒ��� ���� ���� �Ƕ�̵� �׸���
#include <stdio.h>

int main(void) {

	int i, j;
	int len;

	printf("�Ʒ��� ���� ���� �Ƕ�̵带 ����ϴ�.\n");
	printf("�� ���ΰ���? : ");
	scanf_s("%d", &len);

	for (i = 1; i <= len; i++) {

		for (j = 1; j <= i - 1; j++) {
			printf(" ");
		}

		for (j = 1; j <= 2 * (len - i) + 1; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}