// 학생 점수를 읽어 들여 분포를 출력
#include <stdio.h>
#define NUMBER 80

int main(void) {

	int i, j;
	int num;
	int score[NUMBER];
	int dist[11] = { 0 };
	int dist_max = 0;

	printf("학생 수를 입력하세요. : ");

	do {
		scanf_s("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("1~%d사이로 입력해주세요. ", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d명의 점수를 입력해주세요.\n", num);

	for (i = 0; i < num; i++) {

		printf("%2d번 : ", i + 1);

		do {
			scanf_s("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100) {
				printf("0~100사이로 입력하세요.");
			}
		} while (score[i] < 0 || score[i] > 100);
		dist[score[i] / 10]++; // dist[6] = 3
	}
	printf("--- 분포 그래프---\n");

	for (i = 0; i <= 10; i++) { // i <= 10인 이유는 dist[11]이니까
		if (dist[i] > dist_max) {
			dist_max = dist[i]; // dist[6] = 3이니 dist_max가 3
		}
	}

	for (i = dist_max; i >= 1; i--) { // if dist_max 가 3이라면 
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