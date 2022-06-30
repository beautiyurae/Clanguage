#include <stdio.h>
enum month {
	January = 1, February, March, April, May, June, July, August, Setember, October, November, December
};

void print_season(enum month month) {
	switch (month) {
	case March:
	case April:
	case May:
		printf("��"); break;
	case June:
	case July:
	case August:
		printf("����"); break;
	case Setember:
	case October:
	case November:
		printf("����"); break;
	case December:
	case January:
	case February:
		printf("�ܿ�"); break;
	default:
		printf("������ �������� �ʴ� ����"); break;
	}
}

enum month select_month(void) {
	int temp;
	do {
		printf("�� ���Դϱ� : ");
		scanf("%d", &temp);
	} while (temp < January || temp > December);
	return temp;
}

int main(void) {
	enum month your_month;
	printf("�¾ ���� �Է����ּ���. ");
	your_month = select_month();
	printf("����� ");
	print_season(your_month);
	printf("�� �¾����.\n");
	return 0;
}
