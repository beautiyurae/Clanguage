// 읽어 들인 정숫값의 부호 판정(원하는 만큼 반복)
#include <stdio.h>
int main(void) {

	int retry; // 처리를 계속할거야?

	do {

		int n;
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &n);

		if (n == 0) {
			printf("이 수는 0입니다.\n");
		}
		else if (n > 0) {
			printf("이 수는 양수입니다.\n");
		}
		else {
			printf("이 수는 음수입니다.\n");
		}
		printf("한 번 더? [Yes...0/No...else] : ");
		scanf_s("%d", &retry);

	} while (retry == 0); // !retry 와 retry == 0는 같다
	return 0;
}
