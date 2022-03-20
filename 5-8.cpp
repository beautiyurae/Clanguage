// �л� ������ �о� �鿩 ������ ���

#include <stdio.h>
#define NUMBER 80

int main(void) {

	int i, j;
	int num; // ���� �л� ��
	int score[NUMBER]; // �л� ����
	int dist[11] = { 0 }; // ���� ���� -> 0~9 10~19 20~29 30~39 ... 90~99 100

	printf("�л� ���� �Է����ּ���. : ");

	do {
		scanf_s("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("\a1~%d���̷� �Է����ּ���.", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d���� ������ �Է����ּ���.\n", num);

	for (i = 0; i < num; i++) {

		printf("%2d�� : ", i + 1);

		do {
			scanf_s("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100) {
				printf("\a0~100���̷� �Է����ּ���.");
			}
		} while (score[i] < 0 || score[i] > 100);
		dist[score[i] / 10]++; // �� / �� = �� �̹Ƿ� score[i] �� 0 ~ 9 = dist[0]++
	}

	printf("--- ���� �׷��� ---\n");

	for (i = 0; i < 9; i++) {

		printf("%3d~%3d : ", i * 10, i * 10 + 9);

		for (j = 0; j < dist[i]; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("   100 : ");

	for (j = 0; j < dist[10]; j++) {
		printf("*");
	}
	printf("\n");

	return 0;

}