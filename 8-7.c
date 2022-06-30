#include <stdio.h>
enum month {
	January = 1, February, March, April, May, June, July, August, Setember, October, November, December
};

void print_season(enum month month) {
	switch (month) {
	case March:
	case April:
	case May:
		printf("봄"); break;
	case June:
	case July:
	case August:
		printf("여름"); break;
	case Setember:
	case October:
	case November:
		printf("가을"); break;
	case December:
	case January:
	case February:
		printf("겨울"); break;
	default:
		printf("지구에 존재하지 않는 계절"); break;
	}
}

enum month select_month(void) {
	int temp;
	do {
		printf("몇 월입니까 : ");
		scanf("%d", &temp);
	} while (temp < January || temp > December);
	return temp;
}

int main(void) {
	enum month your_month;
	printf("태어난 월을 입력해주세요. ");
	your_month = select_month();
	printf("당신은 ");
	print_season(your_month);
	printf("에 태어났군요.\n");
	return 0;
}
