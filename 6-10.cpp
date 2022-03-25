// 영어 점수와 수학 점수의 최저 점수 구하기
#include <stdio.h>
#define NUMBER 5

int min_of(const int v[], int n) {
	int i;
	int min = v[0];

	for (i = 0; i < n; i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}
	return min;
}

int main(void) {

	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int min_e, min_m;

	printf("%d명의 점수를 입력하세요.\n", NUMBER);

	for (i = 0; i < NUMBER; i++) {
		printf("[%d] 영어 : ", i + 1);
		scanf_s("%d", &eng[i]);
		printf("    수학 : ");
		scanf_s("%d", &mat[i]);
	}

	min_e = min_of(eng, NUMBER);
	min_m = min_of(mat, NUMBER);

	printf("영어 최소 점수 =%d\n", min_e);
	printf("수학 최소 점수 =%d\n", min_m);

	return 0;
}