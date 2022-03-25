// 점수를 읽어 들여 합격자(60점 이상) 목록을 출력
#include <stdio.h>
int print[7];

void print_success(void);

int main(void) {
	int i;
	extern int print[7];
	printf("7명의 점수를 입력해주세요.\n");
	for (i = 0; i < 7; i++) {
		printf("%d : ", i + 1);
		scanf_s("%d", &print[i]);
	}
	print_success();
	return 0;

}
void print_success(void) {
	int i;
	extern int print[7];
	printf("합격자 목록\n");
	printf("-----------\n");
	for (i = 0; i < 7; i++) {
		if (print[i] >= 60) {
			printf("%d번 : %d\n", i + 1, print[i]);

		}
	}
	printf("-----------\n");

}