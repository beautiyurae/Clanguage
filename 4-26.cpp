// width������ �� �ٲ��ϸ鼭 '+'�� '-' ���
// ���� ���� �� 

#include <stdio.h>

int main(void) {

	int no, width;  // no : ���� 
					// width : �� �ٲ� �� ����

	printf("�� ���� ����ұ��? : ");
	scanf_s("%d", &no);
	printf("�� ������ �� �ٲ��ұ��? : ");
	scanf_s("%d", &width);

	if (no > 0) {

		int i, j, k;
		int row;
		row = 1; // row : ��
		int remain;
		remain = no % width; // ���

		for (i = 1; i <= no / width; i++) {

			if (row % 2 == 1) { // row�� Ȧ�����?

				for (j = 1; j <= width; j++) { // 7���ݺ� +
					if (j % 2 == 1) {
						printf("+");
					}
					else {
						printf("-");
					}
				}
				row++;
				printf("\n");
			}

			else { // row�� ¦��

				for (k = 1; k <= width; k++) {
					if (k % 2 == 1) {
						printf("-");
					}
					else {
						printf("+");
					}
				}
				row++;
				printf("\n");
			}
		}
		if (remain > 0) {

			if (row % 2 == 1) {
				for (j = 1; j <= remain; j++) {
					if (j % 2 == 1) {
						printf("+");
					}
					else
						printf("-");
				}
			}
			else {
				for (k = 1; k <= remain; k++) {
					if (k % 2 == 1) {
						printf("-");
					}
					else
						printf("+");

				}
			}
		}


	}
	return 0;
}

/* ���ذ� �� �Ȱ��� å�� ��

#include <stdio.h>
int main(void) {

	int no, width;

	printf("�� ���� ����ұ��? : ");
	scanf_s("%d", &no);
	printf("�� ������ �� �ٲ��ұ��? : ");
	scanf_s("%d", &width);

	if (no > 0) {

		int i, j;
		int rem = no % width;
		int wid = width / 2; // �� ���� ����
		int odd = width % 2; // �� ���� Ȧ���ΰ�?

		for (i = 1; i <= no / width / 2; i++) {
			for (j = 1; j <= wid; j++) {
				printf("+-");
			}
			if (odd) {
				printf("+");
			}
			printf("\n");

			for (j = 1; j <= wid; j++) {
				printf("-+");
			}
			if (odd) {
				printf("-");
			}
			printf("\n");
		}

		if (no / width % 2) {  // �� �׷��� �̰� �ֱ��� 5 �ϰ� 1 ������ �̷����� �ʿ���
			for (i = 1; i <= wid; i++) {
				printf("+-");
			}
			if (odd) {
				printf("+");
			}
			printf("\n");
		}
		if (rem > 0) {
			switch (no / width % 2) {
			case 0: for (j = 0; j < rem / 2; j++) {
				printf("+-");
			}
				  if (rem % 2) {
					  printf("+");
				  }
				  break;
			case 1: for (j = 0; j < rem / 2; j++) {
				printf("-+");
			}
				  if (rem % 2){
					  printf("-");
				  }
				  break;
			}
			printf("\n");
		}
	}
	return 0;
}*/