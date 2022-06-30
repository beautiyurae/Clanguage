// 표준 입력에 있는 숫자 문자의 출현 횟수를 *가 나열된 그래프로 출력하는 프로그램 작성

#include <stdio.h>
int main(void) {
	int ch;
	int cnt[10] = { 0 };

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9') {
			cnt[ch - '0']++;
		}
	}

	printf("숫자 문자의 등장 횟수\n");

	for (int i = 0; i < 10; i++) {
		printf("'%d' : ", i);
		for (int j = 0; j < cnt[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}