// ������ �Ʒ��� ������ �����̵�ﰢ�� ���
#include <stdio.h>

int main(void) {

	int i, j, len;

	puts("������ �Ʒ��� ������ �����̵�ﰢ���� ����ϴ�.");
	printf("ª�� �� : ");
	scanf_s("%d", &len);

	for (i = 1; i <= len; i++) {
		for (j = 1; j <= len - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}