// �л� ������ �о� �鿩 ������ ���
#include <stdio.h>
#define NUMBER 80

int main(void) {

	int i, j;
	int num;
	int score[NUMBER];
	int dist[11] = { 0 };
	int dist_max = 0;

	printf("�л� ���� �Է��ϼ���. : ");

	do {
		scanf_s("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("1~%d���̷� �Է����ּ���. ", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d���� ������ �Է����ּ���.\n", num);

	for (i = 0; i < num; i++) {

		printf("%2d�� : ", i + 1);

		do {
			scanf_s("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100) {
				printf("0~100���̷� �Է��ϼ���.");
			}
		} while (score[i] < 0 || score[i] > 100);
		dist[score[i] / 10]++; // dist[6] = 3
	}
	printf("--- ���� �׷���---\n");

	for (i = 0; i <= 10; i++) { // i <= 10�� ������ dist[11]�̴ϱ�
		if (dist[i] > dist_max) {
			dist_max = dist[i]; // dist[6] = 3�̴� dist_max�� 3
		}
	}

	for (i = dist_max; i >= 1; i--) { // if dist_max �� 3�̶�� 
		for (j = 0; j <= 10; j++) {    // j = 0 _ j = 1 _ j = 2 _ ... j = 6 *
			if (dist[j] >= i) {        // dist[6] >= 3 true
				printf(" * ");
			}
			else
				printf("   ");
		}
		printf("\n");
	}

	for (i = 0; i < 34; i++) {
		printf("-"); 
	}
	printf("\n");

	for (i = 0; i <= 10; i++) {
		printf("%2d ", i * 10);
	}
	printf("\n");

	return 0;
}