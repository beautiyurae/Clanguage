// 표준 입력에 있는 숫자 문자의 출현 횟수를 *가 나열된 그래프로 출력하는 프로그램
// 세로 그래프

#include <stdio.h>
int main(void) {
	int ch;
	int cnt[10] = { 0 };
	int cnt_max = 0;

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9') {
			cnt[ch - '0']++;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (cnt[i] > cnt_max) {
			cnt_max = cnt[i];
		}
	}
	for (int i = cnt_max; i >= 1; i--) {
		for (int j = 0; j < 10; j++) {
			if (cnt[j] >= i) {
				printf(" * ");
			}
			else
				printf("   ");
		}
		printf("\n");
	}
	for (int j = 0; j < 10; j++) {
		printf(" %d ", j);
	}
	return 0;
}