 // �Ƕ�̵� �׸���
#include <stdio.h>
int main(void) {
	int i, j;
	int len;

	printf("�Ƕ�̵带 ����ϴ�.\n");
	printf("�� ���ΰ���? : ");
	scanf_s("%d", &len);

	for (i = 1; i <= len; i++) {
		for (j = 1; j <= len - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}