// ���� ���� ������ �����̵�ﰢ�� ���
#include <stdio.h>
int main(void) {
	int len;
	printf("���� ���� ������ �����̵�ﰢ���� ����ϴ�.\n");
	printf("ª�� �� : ");
	scanf_s("%d", &len);

	for (int i = len; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}