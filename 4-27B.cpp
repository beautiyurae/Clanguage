// ���� ���� ������ �����̵�ﰢ�� ���
#include <stdio.h>

int main(void) {

	int i, j, len;

	puts("���� ���� ������ �����̵�ﰢ���� ����ϴ�.");
	printf("ª�� �� : ");
	scanf_s("%d", &len);

	for (i = len; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}