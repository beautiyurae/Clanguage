#include <stdio.h>
#define NUMBER 6 // 학생수를 매크로로 대체

int main(void) {

	int i, j;
	int score[NUMBER][2]; // 점수
	int student[NUMBER] = { 0 }; // 각 학생의 점수 합계
	int subject[2] = { 0 }; // 각 과목의 점수 합계

	printf("%d명의 점수를 입력하세요.\n", NUMBER); // 6명

	for (i = 0; i < NUMBER; i++) {

		printf("%2d번...국어 : ", i + 1);
		scanf_s("%d", &score[i][0]);
		printf("    ...수학 : ");
		scanf_s("%d", &score[i][1]);

		student[i] = score[i][0] + score[i][1];
		subject[0] += score[i][0]; // 국어 합계
		subject[1] += score[i][1]; // 수학 합계
	}
	printf("-----------------------------\n");
	printf("번호  국어  수학  합계  평균\n");
	printf("-----------------------------\n");

	for (i = 0; i < NUMBER; i++) {
		printf("%3d%6d%6d%6d%7.1f\n", i + 1, score[i][0], score[i][1], student[i], (double)student[i] / 2);
	}
	printf("-----------------------------\n");
	printf("합계%5d%6d%6d\n", subject[0], subject[1], subject[0] + subject[1]);
	printf("평균%6.1f%6.1f%6.1f\n", (double)subject[0] / NUMBER, (double)subject[1] / NUMBER, (double)(subject[0] + subject[1]) / NUMBER);
	printf("-----------------------------\n");
	return 0;
}