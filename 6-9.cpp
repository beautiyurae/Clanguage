// ������ �о� �鿩 �հ���(60�� �̻�) ����� ���
#include <stdio.h>
int print[7];

void print_success(void);

int main(void) {
	int i;
	extern int print[7];
	printf("7���� ������ �Է����ּ���.\n");
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
	printf("�հ��� ���\n");
	printf("-----------\n");
	for (i = 0; i < 7; i++) {
		if (print[i] >= 60) {
			printf("%d�� : %d\n", i + 1, print[i]);

		}
	}
	printf("-----------\n");

}