#include <stdio.h>
#define NUMBER 6 // �л����� ��ũ�η� ��ü

int main(void) {

	int i, j;
	int score[NUMBER][2]; // ����
	int student[NUMBER] = { 0 }; // �� �л��� ���� �հ�
	int subject[2] = { 0 }; // �� ������ ���� �հ�

	printf("%d���� ������ �Է��ϼ���.\n", NUMBER); // 6��

	for (i = 0; i < NUMBER; i++) {

		printf("%2d��...���� : ", i + 1);
		scanf_s("%d", &score[i][0]);
		printf("    ...���� : ");
		scanf_s("%d", &score[i][1]);

		student[i] = score[i][0] + score[i][1];
		subject[0] += score[i][0]; // ���� �հ�
		subject[1] += score[i][1]; // ���� �հ�
	}
	printf("-----------------------------\n");
	printf("��ȣ  ����  ����  �հ�  ���\n");
	printf("-----------------------------\n");

	for (i = 0; i < NUMBER; i++) {
		printf("%3d%6d%6d%6d%7.1f\n", i + 1, score[i][0], score[i][1], student[i], (double)student[i] / 2);
	}
	printf("-----------------------------\n");
	printf("�հ�%5d%6d%6d\n", subject[0], subject[1], subject[0] + subject[1]);
	printf("���%6.1f%6.1f%6.1f\n", (double)subject[0] / NUMBER, (double)subject[1] / NUMBER, (double)(subject[0] + subject[1]) / NUMBER);
	printf("-----------------------------\n");
	return 0;
}