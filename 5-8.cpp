// 학생 점수를 읽어 들여 분포를 출력

#include <stdio.h>
#define NUMBER 80

int main(void) {

	int i, j;
	int num; // 실제 학생 수
	int score[NUMBER]; // 학생 점수
	int dist[11] = { 0 }; // 점수 분포 -> 0~9 10~19 20~29 30~39 ... 90~99 100

	printf("학생 수를 입력해주세요. : ");

	do {
		scanf_s("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("\a1~%d사이로 입력해주세요.", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d명의 점수를 입력해주세요.\n", num);

	for (i = 0; i < num; i++) {

		printf("%2d번 : ", i + 1);

		do {
			scanf_s("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100) {
				printf("\a0~100사이로 입력해주세요.");
			}
		} while (score[i] < 0 || score[i] > 100);
		dist[score[i] / 10]++; // 정 / 정 = 정 이므로 score[i] 가 0 ~ 9 = dist[0]++
	}

	printf("--- 분포 그래프 ---\n");

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