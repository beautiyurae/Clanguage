// ǥ�� �Է¿� �ִ� ���� ������ ���� Ƚ���� *�� ������ �׷����� ����ϴ� ���α׷�
// ���� �׷���

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