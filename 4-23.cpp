// ���簢�� �׸���
#include <stdio.h>

int main(void) {

	int i, j;
	int height;

	printf("���簢���� �׸��ϴ�.\n");
	printf("���̴� ���Դϱ�? : ");
	scanf_s("%d", &height);

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= height; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}