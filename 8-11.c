// ǥ�� �Է¿� �ִ� �� �ٲ� ���� ���� ���α׷��� �ۼ�

#include <stdio.h>
//int main(void) {
//	int ch;
//	int n_count = 0;
//	while ((ch = getchar()) != EOF)
//		if (ch == '\n')
//			n_count++;
//	printf("�� �ٲ�: %d", n_count);
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
	printf("�� �ٲ�: %d", n_count);
	return 0;
}
 