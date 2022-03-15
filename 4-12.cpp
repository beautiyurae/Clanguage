// 읽어 들인 양의 정숫값을 역순으로 출력
#include <stdio.h>

int main(void) {

	int n;
	do {
		printf("양의 정수를 입력하세요. : ");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("\a양의 정수만 입력해주세요.\n");
		}
	} while (n <= 0);
	printf("%d를 거꾸로 읽으면 ", n);
	while (n > 0) {
			printf("%d", n % 10);
			n /= 10;
	}
	printf("입니다.\n");
	return 0;
}
