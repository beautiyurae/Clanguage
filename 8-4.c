#include <stdio.h>
#define alert2() (printf("\a\a"))
#define puts_alert2(str) (alert2(), puts(str))
int main(void) {
	int n;

	printf("������ �Է��ϼ���: "); scanf("%d", &n);

	if (n) {
		puts_alert2("�� ���� 0�� �ƴմϴ�.");
	}
	else
		puts_alert2("�� ���� 0�Դϴ�.");

	return 0;

}