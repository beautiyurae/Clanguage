// ���簢�� �׸���
#include <stdio.h>

int main(void) {

	int i, j;
	int side1, side2, height, width;

	puts("������ �� ���簢���� �׸��ϴ�. ");
	printf("�� ��(1) : ");
	scanf_s("%d", &side1);
	printf("�� ��(2) : ");
	scanf_s("%d", &side2);

	if (side1 > side2) {
		width = side1;
		height = side2;
	}
	else {
		width = side2;
		height = side1;
	}

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}



/* // ù �õ� 
	if (side1 > side2) {
		width = side1; // width�� side1�� ��ġ�� �ٲ�������� �ȵ� height�� ����������
		height = side2;
		for (i = 1; i <= height; i++) {
			for (j = 1; j <= width; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else {
		width = side2;
		height = side1;
		for (i = 1; i <= height; i++) {
			for (j = 1; j <= width; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
*/