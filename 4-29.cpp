// 아래로 향한 숫자 피라미드 그리기
#include <stdio.h>

int main(void) {

	int i, j;
	int len;

	printf("아래로 향한 숫자 피라미드를 만듭니다.\n");
	printf("몇 단인가요? : ");
	scanf_s("%d", &len);

	for (i = 1; i <= len; i++) {

		for (j = 1; j <= i - 1; j++) {
			printf(" ");
		}

		for (j = 1; j <= 2 * (len - i) + 1; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}