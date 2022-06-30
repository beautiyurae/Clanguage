// 표준 입력에 있는 줄 바꿈 수를 세는 프로그램을 작성

#include <stdio.h>
//int main(void) {
//	int ch;
//	int n_count = 0;
//	while ((ch = getchar()) != EOF)
//		if (ch == '\n')
//			n_count++;
//	printf("줄 바꿈: %d", n_count);
//	return 0;
//}

int main(void) {
	int ch;
	int n_count = 0;
	while (1) {
		ch = getchar();
		if (ch == EOF) break;
		if (ch == '\n')
			n_count++;
	}
	printf("줄 바꿈: %d", n_count);
	return 0;
}
 